#include <stdio.h> 
#include <locale.h> 

int main() { 
    setlocale(LC_ALL, "Portuguese_Brazil"); 
    
    printf("Olá\nComo vc está? \n");

    printf("Olá \n");   
    printf("Como foi o dia? \n \n"); 


    printf("Olá mundo!\t");
    printf("Estou aprendendo C.");

    return 0; 
}

// \n quebra a linha 
// \t coloca as strings como forma de tabela  
