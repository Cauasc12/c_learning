#include <stdio.h>

int main(){

    float peso, altura;
    char nome[30];

    printf("Informe seu nome: ");
    scanf("%s", nome);
    printf("Informe seu peso: ");
    scanf("%f", &peso);
    printf("Informe sua altura: ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    printf("--------RESUMO--------");
    printf("\nNome: %s\nIMC: %.2f\nPeso: %.2f\nAltura: %.2f", nome, imc, peso, altura);

}