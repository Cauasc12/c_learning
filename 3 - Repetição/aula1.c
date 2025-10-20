//Estruturas de repetição - For

#include <stdio.h>

int main() {

    //Receba 5 números inteiros e apresente a soma

    int numero;
    int soma = 0;

    for (int i = 0; i < 5; i++){

        printf("Informe um número: ");
        scanf("%d", &numero);

        soma += numero;
    }

    printf("A soma dos números é %d", soma);

    return 0;
}