#include <stdio.h> 
#include <locale.h> 
#include <stdbool.h> //biblioteca para aceitar valores booleanos 

int main() { 
    setlocale(LC_ALL, "Portuguese_Brazil");
  
    int myNum = 15;

    int myOtherNum = 23;

    // Coloca o valor de myOtherNum (23) no myNum
    myNum = myOtherNum;

    // myNum é agora 23, ao invés de 15
    printf("%d\n \n", myNum);

        //Outro exemplo 

    int x = 5;
    int y = 6;
    int sum = x + y; // sum recebe a soma 
    printf("%d \n \n", sum);

        //Variáveis na mesma string

    int a, b, c;
    a = b = c = 50; //Cada um recebe o valor do outro 
    printf("%d", a + b + c);

    /*
        Regras para variáveis os nomes da variáveis (Declaração de variáveis): 

        
    */

    return 0;
}