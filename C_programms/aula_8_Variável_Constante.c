#include <stdio.h> 
#include <locale.h> 

int main() { 
    setlocale(LC_ALL, "Portuguese_Brazil");
  
    /*
        As vari�veis constantes s�o v�ri�veis com o intuito de n�o mudar o valor. 
        Ou seja, quando declara uma vari�vel constate o seu valor � imut�vel. 
    */ 

    const int meuNumero = 20; 
    printf("%d\n", meuNumero); 
    // mudar valor. 
  
  
    // meuNumero = 40; n�o � permitido 

    /* 
        const int minutesPerHour;
        minutesPerHour = 60; 

        Isso � um erro tamb�m. Quando a vari�vel � const n�o � poss�vel declarar e dps incrementar um valor. 
        Tem que incrementar ao mesmo tempo que se declara a vari�vel  
    */ 

   
    return 0; 
}