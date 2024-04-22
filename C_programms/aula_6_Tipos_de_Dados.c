#include <stdio.h> 
#include <locale.h> 
#include <windows.h>  // Para usar Sleep

int main() { //inicio do programa 
    setlocale(LC_ALL, "Portuguese_Brazil"); 

    float decimalSmall = 3.5; //Armazena até 6-7 casas decimais 
    double decimalBig = 19.99; //Armazena até 15 casas decimais 

    printf("%f\n", decimalSmall); 
    printf("%lf\n", decimalBig); //double usa %lf 


    // char a = 65, b = 66, c = 67; //Com a tabela ASCII pode-se colocar números para escolher o caractere desejado 
    // printf("%c\n", a);
    // printf("%c\n", b);
    // printf("%c\n", c);

    Sleep(15000);  // Aguarda 8 segundos (2000 milissegundos)
    system("cls"); // Limpa a tela 

    float myFloatNum = 3.502048;

    printf("%f\n", myFloatNum);   // Por padrão irá mostrar todos os dígitos 
    printf("%.1f\n", myFloatNum); // Mostra 1 dígitos
    printf("%.2f\n", myFloatNum); // Mostra 2 dígitos 
    printf("%.4f\n", myFloatNum);   // Mostra 4 dígitos 

    //Saber o tipo de dado correto irá salvar memoria e irá melhorá a performace do seu programa 

    Sleep(8000);  // Aguarda 8 segundos (2000 milissegundos)
    system("cls"); // Limpa a tela

    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    // Print variables
    printf("Number of items: %d\n", items);
    printf("Cost per item: %.2f %c\n", cost_per_item, currency);
    printf("Total cost = %.2f %c\n", total_cost, currency);

    return 0; 
}