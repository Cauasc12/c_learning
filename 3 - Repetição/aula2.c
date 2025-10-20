//Estrutura de repetição - while e do...while

#include <stdio.h>

int main() {

    //Soma dos números inteiros até q o número informado seja 0

    int numero;
    int soma = 0;

    do {
        printf("Informe um número: ");
        scanf("%d", &numero);
        soma += numero;
    } while (numero != 0);

    /*
    printf("Informe um número: ");
        scanf("%d", &numero);

    while (numero != 0) {
        printf("Informe um número: ");
        scanf("%d", &numero);
        soma += numero;
    }
    */

    printf("A soma dos números foi: %d", soma);

}