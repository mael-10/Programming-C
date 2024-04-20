#include <stdio.h> //biblioteca usada para o input e o output do c
#include <locale.h> //biblioteca de idiomas, para identifcar o idioma que est� usando 

int main() { //inicio do programa 
    setlocale(LC_ALL, "Portuguese_Brazil"); //Especifica qual o seu idioma com base na biblioteca <locale.h> 
    int number = 15;

   
    printf("Você digitou: %d\n", number);

    return 0; // Fim do programa  
}
