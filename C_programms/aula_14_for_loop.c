#include <stdio.h>
#include <locale.h>
#include <windows.h> 

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    int i, j; 

    for (i = 0; i <= 5; i++) {
        printf("Este é o núemro %d\n", i); 
    }

    Sleep(5000); 
    system("cls"); 

    //Loop dentro de um loop 


    for (i = 0; i <= 1; i++) { //Irá reptir 2 * 5 = 10 vezes 

        printf("The number I is equal %d \n \n", i); 

        for (j = 0; j <= 5; j++) {

            printf("The numberJ is equal %d \n \n", j); 

            if (j == 5 && i == 1) { //Se j é 5 e i é 1 então ele executa, se não se j == 5 ele executa a condição (j==5)
                Sleep(5000); 
                system("cls");
                printf("Parabéns o algoritmo foi executado com sucesso. Agora I é %d e J é %d", i, j); 

            } else if (j == 5) {
                Sleep(5000); 
                system("cls");
            }
        }
    }

    return 0;
}