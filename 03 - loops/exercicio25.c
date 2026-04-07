#include <stdio.h>

int main(){

    float vendas, repasseTotal = 0.0, repasseIndividual;

    for(int i = 1; i <= 35; i++ ){
        printf("Informe o montante de vendas do departamento %d: ", i);
        scanf("%f", &vendas);

        repasseIndividual = 0;

        if (vendas > 5500.0){
            repasseIndividual = vendas * 0.035;
            repasseTotal += repasseIndividual;
        }
        printf("Montante destinado a ONG pelo departamento: R$%.2f\n", repasseIndividual);
    }

    printf("Montange final destinado a ONG: R$%.2f\n", repasseTotal);

    return 0;
}