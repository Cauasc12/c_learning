#include <stdio.h>

float kmToMilhas(float medida){
    return medida * 0.621371;
}

float milhasToKm(float medida){
    return medida / 0.621371;
}

float kgParaLibras(float medida){
    return medida * 2.20462;
}

float metrosToPes(float medida){
    return medida *  3.28084;
}

int main(){

    int tipo;
    float medida;

    printf("Informe o modulo da medida: ");
    scanf("%f", &medida);

    printf("Km para Milhas\n2 - Milhas para Km\n3 - Kg para Libras\n4 - Metros para Pés\nInforme o tipo de conversão: ");
    scanf("%d", &tipo);

    switch(tipo) {
        case 1: printf("%.2f Km = %.2f K", medida, kmToMilhas(medida)); break;
        case 2: printf("%.2f K = %.2f Km", medida, milhasToKm(medida)); break;
        case 3: printf("%.2f Kg = %.2f Q", medida, kgParaLibras(medida) ); break;
        case 4: printf("%.2f m = %.2f P", medida, metrosToPes(medida)); break;
        default: printf("Operação Invalálida!!"); break;
    }    

}