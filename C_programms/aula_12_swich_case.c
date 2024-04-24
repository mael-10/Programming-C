#include <stdio.h> 
#include <locale.h>
#include <windows.h>

int main() { 
    setlocale(LC_ALL, "Portuguese_Brazil");
  
    char day; 

    printf("Escolha um mês do ano para fazer a sua festa de acordo com a letra de sua inicial: \n"); 
    scanf("%c", &day); 

    //Swich-case apenas aceita char e int e enums

    switch (day) {
        case 'j':
            printf("Janeiro");
            break;

        case 'f':  
            printf("Fervereiro"); 
            break;

        case 'm': 
            printf("Marçoo"); 
            break;

        default: 
            printf("Outros meses"); // Default não precisa de break no final 
    }

    
    Sleep(5000);
    system("cls");

    int day1; 

    printf("Escolha um mês do ano para fazer a sua festa de acordo com o número do mês: \n"); 
    scanf("%d", &day1); 

    switch (day1) {
        case 1:
            printf("Janeiro");
            break;

        case 2:  
            printf("Fervereiro"); 
            break;

        case 3: 
            printf("Marçoo"); 
            break; // Os cases precisam de break 

        default: 
            printf("Outros meses"); // Default não precisa de break no final 
    }

    /*
        Default significa que se o número for diferente de todos os outros, ele vai executar uma parte específica diferente
    */

    return 0; 
}