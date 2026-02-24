#include <stdio.h>

int main(){

    float valor;
    int frete;

    printf("Informe o valor da compra: ");
    scanf("%f", &valor);
    
    if (valor < 300){
        frete = valor  * 0.35;
    }
    else{
        frete = valor * 0.2;
    }

    float valorFinal = valor + frete;

    printf("Valor final da compra: R$%.2f", valorFinal);
}