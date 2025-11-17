#include <stdio.h>

int main(){

    float base, altura;
    printf("Informe a base: ");
    scanf("%f", &base);
    printf("Informe a altura: ");
    scanf("%f", &altura);

    float area = base * altura;

    printf("A área do retangulo é de: %.2f", area);
}