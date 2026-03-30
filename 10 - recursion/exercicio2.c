#include <stdio.h>

int fatorial(int n){
    if(n <= 1) return 1;

    return n * fatorial(n -1);
}

int main(){

    int numero;
    printf("Informe o fatorial: ");
    scanf("%d", &numero);

    printf("Fatorial de %d = %d", numero, fatorial(numero));

    return 0;
}