#include <stdio.h> 
#include <locale.h> 

int main() { 
    setlocale(LC_ALL, "Portuguese_Brazil");
  
    /*
        As variáveis constantes são váriáveis com o intuito de não mudar o valor. 
        Ou seja, quando declara uma variável constate o seu valor é imutável. 
    */ 

    const int meuNumero = 20; 
    printf("%d\n", meuNumero); 
    // mudar valor. 
  
  
    // meuNumero = 40; não é permitido 

    /* 
        const int minutesPerHour;
        minutesPerHour = 60; 

        Isso é um erro também. Quando a variável é const não é possível declarar e dps incrementar um valor. 
        Tem que incrementar ao mesmo tempo que se declara a variável  
    */ 

   
    return 0; 
}