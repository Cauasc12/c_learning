//Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao
//valor que cada um deu para a realização da aposta. 
//Faça um programa que leia quanto cada apostador apostou, o valor do prêmio
//e imprima quanto cada um ganharia do prêmio com base no valor investido.

#include <stdio.h>

int main() {

    float premio;
    float aposta1;
    float aposta2;
    float aposta3;

    printf("Informe o valor do prêmio: ");
    scanf("%f", &premio);
    
    printf("Quantia apostada pelo primero: ");
    scanf("%f", &aposta1);
    printf("Quantia apostada pelo segundo: ");
    scanf("%f", &aposta2);
    printf("Quantia apostada pelo terceirro: ");
    scanf("%f", &aposta3);

    float total = (float) aposta1 + aposta2 + aposta3;

    float parte1 = (float) aposta1/total;
    float parte2 = (float) aposta2/total;
    float parte3 = (float) aposta3/total;

    float recebe1 = (float) premio * parte1;
    float recebe2 = (float) premio * parte2;
    float recebe3 = (float) premio * parte3;
   
    printf("Recebimento do apostador 1: R$%.2f\n", recebe1);
    printf("Recebimmento do apostador 2: R$%.2f\n", recebe2);
    printf("Recebimento do apostador 3: R$%.2f\n", recebe3);

    return 0;
}