#include <stdio.h>

int main(){

    int num = 5;
    float real = 3.5;
    char caractere = 'c';

    printf("Valor inteiro: %d\n", num);
    printf("Valor real: %.1f\n", real);
    printf("Caractere: %c\n", caractere);

    int *p1 = &num;
    float *p2 = &real;
    char *p3 = &caractere;

    *p1 = 10;
    *p2 = 5.8;
    *p3 = 'a';
    printf("Novos Valores\n");
    printf("Valor inteiro: %d\n", num);
    printf("Valor real: %.1f\n", real);
    printf("Caractere: %c\n", caractere);


    return 0;
    
}