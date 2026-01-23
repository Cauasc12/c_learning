#include <stdio.h>

int main(){

    int tipo;
    float medida;

    printf("Informe o modulo da medida: ");
    scanf("%f", &medida);

    printf("Km para Milhas\n2 - Milhas para Km\n3 - Kg para Libras\n4 - Metros para Pés\nInforme o tipo de conversão: ");
    scanf("%d", &tipo);

    switch(tipo) {
        case 1: printf("%.2f Km = %.2f K", medida, medida * 0.621371); break;
        case 2: printf("%.2f K = %.2f Km", medida, medida / 0.621371); break;
        case 3: printf("%.2f Kg = %.2f Q", medida, medida * 2.20462 ); break;
        case 4: printf("%.2f m = %.2f P", medida, medida *  3.28084); break;
        default: printf("Operação Invalálida!!"); break;
    }    

}