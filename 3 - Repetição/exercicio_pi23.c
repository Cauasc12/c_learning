#include <stdio.h>

int main(){

    int inicio, final;

    printf("Informe o primeiro mês a ser analisado(0-12): ");
    scanf("%d", &inicio);
    printf("Informe o ulimo mês a ser analisado(0-12): ");
    scanf("%d", &final);

    float montanteIndividual, montanteTotal = 0;

    for(int mes = inicio; mes <= final; mes++){
        printf("Informe o montante de vendas do mês %d: ", mes);
        scanf("%f", &montanteIndividual);
        montanteTotal += montanteIndividual;
    }

    float media = montanteTotal / final-inicio;

    printf("A média de vendas entre os meses %d e %d foi: R$%.2f", inicio, final, media);

    return 0;
}