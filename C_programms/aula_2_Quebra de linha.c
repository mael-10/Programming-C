#include <stdio.h> 
#include <locale.h> 

int main() { 
    setlocale(LC_ALL, "Portuguese_Brazil"); 
    
    printf("Ol�\nComo vc est�? \n");

    printf("Ol� \n");   
    printf("Como foi o dia? \n \n"); 


    printf("Ol� mundo!\t");
    printf("Estou aprendendo C.");

    return 0; 
}

// \n quebra a linha 
// \t coloca as strings como forma de tabela  
