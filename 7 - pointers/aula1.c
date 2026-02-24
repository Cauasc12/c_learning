#include <stdio.h>

void incrementa(int *valor){
    (*valor)++;
}

int main(){

    int contador = 10;

    printf("Antes de incrementar\n");
    printf("Contador vale %d\n", contador);
    printf("O endereco de memoria eh %p\n", &contador);

    incrementa(&contador);

    printf("Depois de incrementar\n");
    printf("Contador vale %d\n", contador);
    printf("O endereco de memoria eh %p\n", &contador);

    return 0;
}