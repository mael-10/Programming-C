#include <stdio.h> 
#include <locale.h>

int main() { 
    setlocale(LC_ALL, "Portuguese_Brazil");
  
    
    int i = 0;

    while (i < 5) { //enquanto for verdadeiro ele executa a operação 
        printf("%d\n", i);
        i++;
    }

    printf("\n \n");

    i = 0;

    do {
        printf("%d\n", i);
        i++;
    }
    while (i < 5);


    //A diferença entre o do/while e o while, é que o while verifica a condição primeiro, e o do/while executa primeiro e dps verefica a condição


    return 0; 
}