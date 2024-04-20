#include <stdio.h> 
#include <locale.h> 

int main() { //inicio do programa 
    setlocale(LC_ALL, "Portuguese_Brazil");
  
    int varTeste; // declarando vari�veis
    varTeste = 20; // atribuindo v�ri�veis

    int var1 = 10;  // declarando e atribuindo. Int � inteiro 
    float var2 = 10.786; // float � n�mero reais 
    char var3 = 'a'; // rebece apenas um caractere. S� pode ser colocado com aspas simples
    char* string = "Apenas um Teste"; // � uma v�ri�vel que vai aceitar uma sequ�ncia de caracteres 
 
    printf("%d\n", var1); 
    printf("%f\n", var2); 
    printf("%c\n", var3); 
    printf("%s\n", string);


    /*Formato espec�fico s�o usado junto com o printf() para dizer ao compilador que tipo de dado a vari�vel est� armazenando.
     O Formato espec�fco come�a com um sinal de porcentagem seguido por uma letra 
    */

   // "%d" para n�meros inteiros 
   // "%f" para n�meros reais 
   // "%c" para caracteres 

   printf("Meu n�mero favorito � %d\n", varTeste);

   //Essa � uma maneira de concatenar. H� tamb�m outra maneira 

   printf("Meu n�mero favorito � %d , mas ele � menor que o %f", var1, var2); 
   
    return 0; // Fim do programa 
}