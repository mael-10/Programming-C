#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float height;  // Vari�vel para altura do quadrado
    int weight;  // Vari�vel para comprimento do quadrado

    // Pedindo ao usu�rio para digitar a altura
    printf("Digite a altura do quadrado: \n");
    scanf("%f", &height);  // Corrigido para float e adicionado & para pegar o endere�o da vari�vel

    // Pedindo ao usu�rio para digitar o comprimento
    printf("Digite o comprimento do quadrado: \n");
    scanf("%d", &weight);  // Corrigido para int e adicionado & para pegar o endere�o da vari�vel

    // Calculando a �rea do quadrado
    float area = height * weight;  // Corrigido para float para um resultado de ponto flutuante

    // Imprimindo a �rea do quadrado
    printf("A �rea do quadrado �: %.2f\n", area);  // Usando %f para imprimir float, com precis�o de 2 casas decimais

    return 0;
}

