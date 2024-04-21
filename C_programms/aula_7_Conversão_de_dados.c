#include <stdio.h> 
#include <locale.h> 


int main() { 
    setlocale(LC_ALL, "Portuguese_Brazil"); 

    //conversão implicita 
    
    float sum = 5 / 2;
    printf("%f", sum); // 2.000000

    return 0; 
}