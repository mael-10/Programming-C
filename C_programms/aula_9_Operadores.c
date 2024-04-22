#include <stdio.h> 
#include <locale.h>
#include <windows.h> 

int main() { 
    setlocale(LC_ALL, "Portuguese_Brazil");
  
   int x = 10; 
   int y = 15;
   int z; 

   printf("%d\n", y + x); // Retorna a soma
   printf("%d\n", y - x);  // Retorna a subtração 
   printf("%d\n", y * x); // Retorna a multiplicação 
   printf("%f\n", (float) y / x); // Retorna o quociente da divisão 
   printf("%d\n", y % x); // Retorna o resto da divisão 
   printf("%d\n", ++x); // Incrementa uma unidade 
   printf("%d\n \n", --x); // Decrementa uma unidade 


    // Atribuição de valores 

    z = 15; // Z recebe o valor de 15; 
    printf("%d\n", z); 
    z += 3; // Incrementa valores acima de 1. Ex: x = x + 3 
    printf("%d\n", z); 
    z -= 3; // Decrementa valores acima de 1. Ex: x = x - 3
    printf("%d\n", z); 
    z *= 3; // Incrementa o valor da variável de multiplicado por 3. Ex: x = x * 3
    printf("%d\n", z); 
    z /= 3; // Incrementa o valor da variável de dividido por 3. Ex: x = x / 3
    printf("%f ", (float) z); 

    Sleep(12000);
    system("cls"); 

    //Comparadores Lógicos 

    /*
        Os operadores Lógicos tem o intuito de comparar dois valores. Isso é importante na programação para podermos 
        fazer certas deciçãoes 

        O valor de retorno dessa operações é 0 e 1. 0 para VERDADEIRO e 1 para FALSO. Esse valores são conhecidos como Boleanos. 
        Serão muito úteis. 
    */ 

    x = 5;
    y = 3;

    printf("%d\n", x == y); // Retorna valor 0, pois 1 é FALSO. Pois 5 não IGUAL a 3, então é uma afirmativa FALSO.
    printf("%d\n", x != y); // Retorna valor 1, pois 1 é VERDADEIRO. Pois 5 é NÃO É IGUAL a 3, então é uma afirmativa VERDADEIRO.
    printf("%d\n", x > y);  // Retorna valor 1, pois 1 é VERDADEIRO. Pois 5 É MAIOR 3, então é uma afirmativa VERDADEIRA. 
    printf("%d\n", x < y);  // Retorna valor 0, pois 0 é FALSO. Pois 5 não é MENOR que 3, então é uma afirmativa FALSO.
    printf("%d\n", x >= y); // Isso significa '>=' MAIOR OU IGUAL. 
    printf("%d\n \n", x <= y); // Isso significa '<=' MENOR OU IGUAL. 



    //Operadores Lógicos

    /*
        Os operadores lógicos são usados para determinar a lógica entre váriáveis e valores     
    */

    printf("%d\n", x > 3 && x < 10); //Retorna verdadeiro se todos os valores forem verdadeiros 
    printf("%d\n", x > 3 || x < 4);  //Retorna verdadeiro se um valor é verdadeiro 
    printf("%d\n", !(x > 3 && x < 10)); //Se o resultado é VERDADEIRO o resultado retornado é FALSO. Inverte os valores 



    // Deixe UTF-8 
    // Leia a docs e tabela operadores relacionais e vídeos g
     
    return 0; 
}