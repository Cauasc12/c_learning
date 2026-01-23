#include <stdio.h>

int main(){

    float nota1, nota2;

    printf("Informe a nota1: ");
    scanf("%2f", & nota1);
    printf("Informe a nota2: ");
    scanf("%2f", & nota2);

    float falta = 15 - (nota1 + nota2);
    
    printf("Falta %.2f pontos", falta);

}