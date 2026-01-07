#include <stdio.h>

int main(){

    float meta, doacao, soma = 0;
    
    printf("Meta da vaquinha: ");
    scanf("%f", &meta);

    do{
        printf("Valor da doação: ");
        scanf("%f", &doacao);
        soma += doacao;
        printf("Valor acumudado: R$%.2f\n", soma);
    } while(soma < meta);

    if (soma > meta){
        printf("A meta da vaquinha foi ultrapassada");
    }
    else {
        printf("A meta da vaquinha foi alcançada");
    }

    return 0;
}