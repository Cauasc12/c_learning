#include <stdio.h>
#include <string.h>

struct st_aluno{
    char nome[101];
    float notas[3];
    int frequencia;
    float media;
};

int main(){
    
    int qntAlunos;
    printf("Informe a quantidade de alunos: ");
    scanf("%d", &qntAlunos);
    
    struct st_aluno alunos[qntAlunos];
    float mediaTurma, somaMedias = 0;

    for(int i = 0; i < qntAlunos; i++){
        printf("Informe o nome do aluno: ");
        scanf(" %[^\n]", alunos[i].nome);
        printf("Informe as 3 notas: ");
        scanf("%f %f %f", &alunos[i].notas[0], &alunos[i].notas[1], &alunos[i].notas[2]);
        printf("Informe a frequencia: ");
        scanf("%d", &alunos[i].frequencia);
        alunos[i].media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2]) / 3;
        somaMedias += alunos[i].media;
    }

    mediaTurma = somaMedias / qntAlunos;
    
    for(int i = 0; i < qntAlunos; i++){

        char resultado[99] = "Reprovado!";
        if(alunos[i].media >= mediaTurma && alunos[i].frequencia >= 65){
            strcpy(resultado,"Aprovado!");
        }

        printf("Aluno: %s\n", alunos[i].nome);
        printf("Notas: %.1f-%.1f-%.1f\n", alunos[i].notas[0], alunos[i].notas[1], alunos[i].notas[2]);
        printf("Média: %.2f - %s\n", alunos[i].media, resultado);
    }

    return 0;
}