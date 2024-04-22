#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int nota1, nota2;  // Variáveis para entrada de notas

    // Entrada de notas usando 'scanf'
    printf("Digite a primeira nota \n"); 
    scanf("%d", &nota1); 
    printf("Digite a segunda nota \n"); 
    scanf("%d", &nota2); 

    // Consome o caractere residual (Enter) após 'scanf'
    getchar();  // Para evitar problemas com o buffer de entrada

    float media = (nota1 + nota2) / 2;  // Cálculo da média

    // Exibe a média com formatação decimal
    printf("A média entre %d e %d é igual a %.2f\n", nota1, nota2, media);  // Saída formatada

    // Espera o usuário pressionar Enter antes de fechar
    printf("Pressione Enter para sair...\n");
    getchar();  // Aguarda o usuário pressionar Enter   

    return 0;  // Finaliza o programa sem erros
}
