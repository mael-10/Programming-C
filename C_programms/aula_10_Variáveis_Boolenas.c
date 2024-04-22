#include <stdio.h> 
#include <locale.h>
#include <stdbool.h> // Biblioteca para usar variáveis do tipo bool  

int main() { 
    setlocale(LC_ALL, "Portuguese_Brazil");
  
    // Booleano representa apenas dois valores. Verdadeiro ou falso.
    
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    printf("%d \n", isProgrammingFun);   // Returns 1 (true)
    printf("%d \n \n", isFishTasty);        // Returns 0 (false)

    // Você pode usar %d para especificar o formato ao mostrar na tela o valor booleano 
    // Mas o mais comum é retornar um valor booleano para comparar valores ou variáveis. Como: 

    printf("%d \n", 10 == 10); 
    printf("%d \n", 10 == 15); 
    printf("%d \n \n", 5 == 55); 


    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;

    // Find out if both hamburger and pizza is tasty
    printf("%d", isHamburgerTasty == isPizzaTasty);

    return 0; 
}