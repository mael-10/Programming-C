#include <stdio.h> 
#include <locale.h> 

int main() { //inicio do programa 
    setlocale(LC_ALL, "Portuguese_Brazil");
  
    int varTeste; // declarando variáveis
    varTeste = 20; // atribuindo variáveis

    int var1 = 10;  // declarando e atribuindo. Int é o mesmo que inteiro 
    float var2 = 10.786; // float são números reais 
    char var3 = 'a'; // rebece apenas um caractere. são pode ser colocado com aspas simples
    char string[] = "Apenas um Teste"; // É uma variavel que vai aceitar uma sequência de caracteres 
 
    printf("%d\n", var1); 
    printf("%f\n", var2); 
    printf("%c\n", var3); 
    printf("%s\n \n", string);


    /*Formato específico ­ são usado junto com o printf() para dizer ao compilador que tipo de dado a variável está armazenando.
     O Formato específico começa com um sinal de porcentagem seguido por uma letra 
    */

   // "%d" para números inteiros 
   // "%f" para números reais 
   // "%c" para caracteres 
   // "%s" para strings

   printf("Meu número favorito é %d\n", varTeste);

   //Essa é uma maneira de concatenar. Há também outra maneira 

   printf("Meu número favorito é %d , mas ele é menor que o %f", var1, var2); 
   
    return 0; // Fim do programa 
}