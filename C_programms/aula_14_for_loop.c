#include <stdio.h>
#include <locale.h>
#include <windows.h> 

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    int i, j; 

    for (i = 0; i <= 5; i++) {
        printf("Este � o n�emro %d\n", i); 
    }

    Sleep(5000); 
    system("cls"); 

    //Loop dentro de um loop 


    for (i = 0; i <= 1; i++) { //Ir� reptir 2 * 5 = 10 vezes 

        printf("The number I is equal %d \n \n", i); 

        for (j = 0; j <= 5; j++) {

            printf("The numberJ is equal %d \n \n", j); 

            if (j == 5 && i == 1) { //Se j � 5 e i � 1 ent�o ele executa, se n�o se j == 5 ele executa a condi��o (j==5)
                Sleep(5000); 
                system("cls");
                printf("Parab�ns o algoritmo foi executado com sucesso. Agora I � %d e J � %d", i, j); 

            } else if (j == 5) {
                Sleep(5000); 
                system("cls");
            }
        }
    }

    return 0;
}