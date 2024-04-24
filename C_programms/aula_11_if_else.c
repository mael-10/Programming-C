#include <stdio.h> 
#include <locale.h>

int main() { 
    setlocale(LC_ALL, "Portuguese_Brazil");
  

    int x = 20;
    int y = 18;
    if (x > y) {
    printf("x é maior que y");
    }


    int tempo = 20;
    if (tempo < 18) {
        printf("Bom dia.");
    } else {
        printf("Boa tarde.");
    }


    int time = 22;
    if (time < 10) {
        printf("Bom dia.");
    } else if (time < 20) {
        printf("Boa tarde.");
    } else {
        printf("Boa noite.");
    }
    
    return 0; 
}