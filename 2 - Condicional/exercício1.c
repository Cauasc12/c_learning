//programa que leia três valores e apresente como resultado a soma dos quadrados dos valores lidos

#include <stdio.h>

int main() {

    int num1;
    int num2;
    int num3;
    
    printf("Informe os números que deseja obter a soma dos quadrados!!\n");

    printf("Primeri número: ");
    scanf("%d", &num1);
    printf("Segundo número: ");
    scanf("%d", &num2);
    printf("Terceiro número: ");
    scanf("%d", &num3);

    int quadrado1 = num1 * num1;
    int quadrado2 = num2 * num2;
    int quadrado3 = num3 * num3;

    int soma = quadrado1 + quadrado2 + quadrado3;

    printf("A soma dos quadrados é: %d", soma);


    return 0;
}