#include <stdio.h>

int main(){

    float razao;
    int valorInicial, qntTermos;

    printf("Informe o valor Inicial: ");
    scanf("%d", &valorInicial);
    printf("Informe a quantidade de termos: ");
    scanf("%d", &qntTermos);
    printf("Informe a razao da Progressão Aritimética: ");
    scanf("%f", &razao);

    float valor = valorInicial;

    for(int i = 1; i <= qntTermos; i++){
        
        printf("%.2f\n", valor);
        valor += razao;
    }

    return 0;
}