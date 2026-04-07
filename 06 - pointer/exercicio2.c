#include <stdio.h>
#include <string.h>

int main(){

    int n1, n2;

    printf("Valor 1: ");
    scanf("%d", &n1);
    printf("Valor 2: ");
    scanf("%d", &n2);

    char variavel[3] = "n1";

    int *p = &n1;

    if(&n2 > &n1){
        p = &n2;
        strcpy(variavel,"n2");
    }

    printf("Variavel com maior endereco de memoria\n");
    printf("Endereco: %p - Variavel: %s - Valor: %d\n", p, variavel, *p);

    return 0;
}