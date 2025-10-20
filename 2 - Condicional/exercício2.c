//Leia quatro notas, calcule a média aritmética e imprima o resultado

#include <stdio.h>

int main() {

    float nota1;
    float nota2;
    float nota3;
    float nota4;

    printf("Forneça as notas dos alunos:\n");

    printf("Primera nota: ");
    scanf("%f", &nota1);
    printf("Segunda nota: ");
    scanf("%f", &nota2);
    printf("Terceira nota: ");;
    scanf("%f", &nota3);
    printf("Quarta nota: ");
    scanf("%f", &nota4);

    float media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A média das notas é %.2f", media);  

    return 0;
}