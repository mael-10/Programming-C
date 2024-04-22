#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int nota1, nota2;  // Vari�veis para entrada de notas

    // Entrada de notas usando 'scanf'
    printf("Digite a primeira nota \n"); 
    scanf("%d", &nota1); 
    printf("Digite a segunda nota \n"); 
    scanf("%d", &nota2); 

    // Consome o caractere residual (Enter) ap�s 'scanf'
    getchar();  // Para evitar problemas com o buffer de entrada

    float media = (nota1 + nota2) / 2;  // C�lculo da m�dia

    // Exibe a m�dia com formata��o decimal
    printf("A m�dia entre %d e %d � igual a %.2f\n", nota1, nota2, media);  // Sa�da formatada

    // Espera o usu�rio pressionar Enter antes de fechar
    printf("Pressione Enter para sair...\n");
    getchar();  // Aguarda o usu�rio pressionar Enter   

    return 0;  // Finaliza o programa sem erros
}
