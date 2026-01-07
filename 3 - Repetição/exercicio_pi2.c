#include <stdio.h>

static int i = 1;

void validaCompra(float *L){
    float D;
    printf("Débito: ");
    scanf("%f", &D);

    if (*L - D >= 0){
        printf("Compra %d possivel1\n", i);
        *L -= D;
        i++;
    }
    else {
        printf("Compra \"estourarah\" o cartao\n");
        printf("Limite restante: %.2f\n\n", *L);
    }
}

int main(){

    float limite;
    printf("Limite do cartão: ");
    scanf("%f", &limite);

    while(limite > 0){
        validaCompra(&limite);
    }
    
    printf("Seu limite de compras acabou!");
    return 0;
}