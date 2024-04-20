#include <stdio.h> 
#include <locale.h> 
#include <stdbool.h> //biblioteca para aceitar valores booleanos 

int main() { 
    setlocale(LC_ALL, "Portuguese_Brazil");
  
    int myNum = 15;

    int myOtherNum = 23;

    // Coloca o valor de myOtherNum (23) no myNum
    myNum = myOtherNum;

    // myNum � agora 23, ao inv�s de 15
    printf("%d\n \n", myNum);

        //Outro exemplo 

    int x = 5;
    int y = 6;
    int sum = x + y; // sum recebe a soma 
    printf("%d \n \n", sum);

        //Vari�veis multiplas declara��es com o mesmo valor 

    int a, b, c;
    a = b = c = 50; //Cada um recebe o valor do outro 
    printf("%d", a + b + c);

    /*
        Regras para vari�veis os nomes da vari�veis (Declara��o de vari�veis): 

        1- Os Nomes podem conter letras e n�meros e underscores.  
        2- Os Nomes podem come�ar com letras e underscores.  
        3- Os Nomes n�o podem come�ar com n�meros. 
        4- Os Nomes s�o case-sensitive myVar � diferente de myvar.  
        5- Os Nomes n�o podem conter caracteres especiais. 
        6- Palavras reservadas n�o podem ser usadas, como o "int".
    */

    return 0;
}