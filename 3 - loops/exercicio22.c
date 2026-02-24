#include <stdio.h>

int main(){

    int numero, soma = 0;

    for(int i = 1; i <= 65; i++){
        printf("Informe o número %d: ", i);
        scanf("%d", &numero);
        soma += numero;
    }

    printf("Soma dos números: %d", soma);

    return 0;
}
