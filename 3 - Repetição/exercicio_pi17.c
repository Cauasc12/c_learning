#include <stdio.h>

int main(){

    int numero = 2, soma = 0;

    for(int i = 1; i <= 25; i++){
        printf("%d ", numero);
        soma += numero;
        numero += 2;
    }

    printf("\nSoma dos números: %d\n", soma);

    return 0;
}
