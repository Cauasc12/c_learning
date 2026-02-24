#include <stdio.h>

int main(){

    int tabuada[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int numero;
    printf("Infome o número a ser calculado: ");
    scanf("%d", &numero);

    for(int i = 0; i < 10; i++){
        int resultado = numero * tabuada[i];
        printf("%d x %d = %d\n", numero, tabuada[i], resultado);
    }

    return 0;
}