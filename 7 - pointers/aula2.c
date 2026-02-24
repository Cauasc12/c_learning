#include <stdio.h>

int main(){

    int n;
    int *p;

    printf("Informe um numero: ");
    scanf("%d", &n);

    p = &n;


    printf("Numero informado: %d\n", n);
    printf("Endereco de memoria: %p\n", &n);

    printf("Numero do pontero: %d\n", *p);
    printf("Endereco do ponteiro: %p\n", p);

    return 0;    
}