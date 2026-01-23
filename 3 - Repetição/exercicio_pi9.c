#include <stdio.h>
#include <math.h>

int main(){

    float demandaTotal = 0, demandaIndividual, capacidade;    

    for(int i = 1; i <= 60; i++){
        printf("Demanda de água do morador %d: ", i);
        scanf("%f", &demandaIndividual);

        demandaTotal += demandaIndividual;
    }

    printf("Capacidade do caminhão pipa: ");    
    scanf("%f", &capacidade);

    int viagens = (int)ceil(demandaTotal / capacidade);

    printf("Será necessário que o caminhão faça %d viagens", viagens);

    return 0;
}