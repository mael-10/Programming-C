#include <stdio.h> 
#include <locale.h> 


int main() { 
    setlocale(LC_ALL, "Portuguese_Brazil"); 

    //convers�o implicita 
    
    float sum = 5 / 2;
    printf("%f\n \n", sum); // 2.000000

    /*
    Porque o resultado � 2 2.000000 e n�o 2.5? Bom, � porque 5 e 2 ainda s�o n�meros inteiros na divis�o. Nesse caso voc� precisa manualmente
    converter os valores inteiros em valores decimais ou conhecidos como "floating-point values"
    */

   //Para concertar esse problema precisa-se converter os valores inteiros para float. 

   // Deve-se colocar o () com o tipo na vari�vel nesse exemplo: 


   // Leia a docs
 
   float sum2 = (float) 5  / 2; 
   printf("%f\n", sum2); 



    return 0; 
}