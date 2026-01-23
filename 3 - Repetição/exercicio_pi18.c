#include <stdio.h>

int main(){

    int numero = 51, soma = 0;

    for(int i = 1; i <= 30; i++){
        printf("%d ", numero);
        soma += numero;
        numero += 2;
    }

    printf("\nSoma dos números: %d\n", soma);

    return 0;
}
