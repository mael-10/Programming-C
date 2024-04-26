#include <stdio.h> 
#include <locale.h> 
#include <windows.h> 

int main() {
    int myNumbers[] = {25, 50, 75, 100}; 

    /*
        Os arrays são usados para armazenar múltiplas variáveis, ao invés de clarar uma única variável para cada valor. 
        Para inserir os valores deve-se usar as chaves. 


        O começo de um array sempre começa com 0, pois os valores armazenados são indicados por posições: 
    */

   printf("%d \n \n", myNumbers[0]); 

   myNumbers[0] = 11; //Dessa maneira, vc pode mudar o valor específico do array. Agora a posição 0 não é mais 25, e sim 11. 

   //Para mostrar os valores do array, deve-se colocar em um for loop 

   for (int i = 0; i < 4; i++) {
    printf("%d \n", myNumbers[i]); 

   }

   Sleep(5000);  
   system("cls"); 

   int numbers[5]; //Dessa maneira delimito o tamanho do array, nesse caso ele vai ter 5 posições contando apartir do 0
   // Essa é uma maneira bastante comum para estabelecer o tamanho do array e adicionar os elementos dps 

    numbers[0] = 25;
    numbers[1] = 50;
    numbers[2] = 75;
    numbers[3] = 100;

    for (int i = 0; i < 4; i++) {
    printf("%d \n", numbers[i]); 

   }

    return 0; 
}