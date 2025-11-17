#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    
    printf("Infome a 1 nota: ");
    scanf("%f", &nota1);
    printf("Infome a 2 nota: ");
    scanf("%f", &nota2);
    printf("Infome a 3 nota: ");
    scanf("%f", &nota3);

    float nota = (nota1*1 + nota2*2 + nota3*3) / 6;

    if (nota >= 7) {
        printf("APROVADO - nota: %.2f", nota);
        if (nota >= 5){
            printf("EM RECUPERAÇÃO - nota: %.2f", nota);
        }
        else {
            printf("REPROVADO - nota: %.2f", nota);
        }
    }

}