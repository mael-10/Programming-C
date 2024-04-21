#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declara��o de vari�veis como float para valores decimais
    int nota1; 
    int nota2; 

    printf("Digite a primeira nota \n"); 
    scanf("%d", &nota1); 
    printf("Digite a segunda nota \n"); 
    scanf("%d", &nota2); //scanf n�o usa /n 

    float media = (nota1 + nota2) / 2;  // C�lculo da m�dia

    // Formata��oo correta para exibir valores decimais
    printf("A m�dia entre %d e %d � igual a %.2f\n", nota1, nota2, media);  // Sa�da formatada

    return 0;  // Finaliza o programa sem erros
}

