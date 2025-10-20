//Tipos númericos

#include <stdio.h>

int main() {

    //Inteiros
    //int idade;

    //Ponto flutuante
    float nota1;
    float nota2;
    float media = 0;
    //double media2;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Sua média é %.2f", media);

    return 0;
}