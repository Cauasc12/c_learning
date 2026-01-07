#include <stdio.h>

int main(){

    float nota1, nota2, nota3, nota4, media;
    int repetir;

    do{
        printf("Informe a primeira nota: ");
        scanf("%f", &nota1);
        printf("Informe a primeira nota: ");
        scanf("%f", &nota2);
        printf("Informe a terceira nota: ");
        scanf("%f", &nota3);

        media = (nota1+nota2+nota3) / 3;

        if (media > 7){
            printf("Aluno APROVADO!\n");
        }
        else if(media > 3){
            printf("Informe a 4 nota: ");
            scanf("%f", &nota4);
            media = (nota1+nota2+nota3+nota4) / 4;
            if (media >= 5){
                printf("Aluno APROVADO!\n");
            }
            else {
                printf("Aluno REPROVADO\n");
            }
        }
        else {
            printf("Aluno REPROVADO!\n");
        }

        printf("Digite 1 se deseja verificar a situação de outro aluno e 2 se não quiser: ");
        scanf("%d", &repetir);

    }while (repetir == 1);

    printf("Programa encerrado!");

    return 0;
}