#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float height;  // Variável para altura do quadrado
    int weight;  // Variável para comprimento do quadrado

    // Pedindo ao usuário para digitar a altura
    printf("Digite a altura do quadrado: \n");
    scanf("%f", &height);  // Corrigido para float e adicionado & para pegar o endereço da variável

    // Pedindo ao usuário para digitar o comprimento
    printf("Digite o comprimento do quadrado: \n");
    scanf("%d", &weight);  // Corrigido para int e adicionado & para pegar o endereço da variável

    // Calculando a área do quadrado
    float area = height * weight;  // Corrigido para float para um resultado de ponto flutuante

    // Imprimindo a área do quadrado
    printf("A área do quadrado é: %.2f\n", area);  // Usando %f para imprimir float, com precisão de 2 casas decimais

    return 0;
}

