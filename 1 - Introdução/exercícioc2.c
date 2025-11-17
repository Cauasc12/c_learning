//Peça ao usuário para digitar três valores inteiros e imprima a soma deles

#include <stdio.h>

int main() {

    int num1;
    int num2;
    int num3;

    printf("Informe os números que deseja somar!!\n");

    printf("Primeiro número: ");
    scanf("%d", &num1);
    printf("Segundo número: ");
    scanf("%d", &num2);
    printf("Terceiro número: ");
    scanf("%d", &num3);

    int soma = num1 + num2 + num3;

    printf("%d + %d + %d = %d", num1, num2, num3, soma);

    return 0;
}