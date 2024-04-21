#include <stdio.h> 
#include <locale.h> 

int main() { //inicio do programa 
    setlocale(LC_ALL, "Portuguese_Brazil");
  
    int varTeste; // declarando vari�veis
    varTeste = 20; // atribuindo vari�veis

    int var1 = 10;  // declarando e atribuindo. Int � o mesmo que inteiro 
    float var2 = 10.786; // float s�o n�meros reais 
    char var3 = 'a'; // rebece apenas um caractere. s�o pode ser colocado com aspas simples
    char string[] = "Apenas um Teste"; // � uma variavel que vai aceitar uma sequ�ncia de caracteres 
 
    printf("%d\n", var1); 
    printf("%f\n", var2); 
    printf("%c\n", var3); 
    printf("%s\n \n", string);


    /*Formato espec�fico � s�o usado junto com o printf() para dizer ao compilador que tipo de dado a vari�vel est� armazenando.
     O Formato espec�fico come�a com um sinal de porcentagem seguido por uma letra 
    */

   // "%d" para n�meros inteiros 
   // "%f" para n�meros reais 
   // "%c" para caracteres 
   // "%s" para strings

   printf("Meu n�mero favorito � %d\n", varTeste);

   //Essa � uma maneira de concatenar. H� tamb�m outra maneira 

   printf("Meu n�mero favorito � %d , mas ele � menor que o %f", var1, var2); 
   
    return 0; // Fim do programa 
}