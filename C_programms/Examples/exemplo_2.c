#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração de variáveis como float para valores decimais
    int nota1; 
    int nota2; 

    printf("Digite a primeira nota \n"); 
    scanf("%d", &nota1); 
    printf("Digite a segunda nota \n"); 
    scanf("%d", &nota2); //scanf não usa /n 

    float media = (nota1 + nota2) / 2;  // Cálculo da média

    // Formataçãoo correta para exibir valores decimais
    printf("A média entre %d e %d é igual a %.2f\n", nota1, nota2, media);  // Saída formatada

    return 0;  // Finaliza o programa sem erros
}

