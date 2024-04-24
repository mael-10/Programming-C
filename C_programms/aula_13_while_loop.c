#include <stdio.h> 
#include <locale.h>
#include <windows.h>

int main() { 
    setlocale(LC_ALL, "Portuguese_Brazil");
  
    
    int i = 0;

    while (i < 5) { //enquanto for verdadeiro ele executa a operação 
        printf("%d\n", i);
        i++;
    }


    return 0; 
}