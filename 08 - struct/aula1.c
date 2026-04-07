#include <stdio.h>
#include <string.h>

//Struct - estruturas que reunem varias variaveis

//definicao do struct
struct st_aluno{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
}aluno2, aluno3;

//funcao para exibicao
void exibir(struct st_aluno aluno){
    printf("=========DADOS DO ALUNO=========\n");
    printf("Matricula: %s\n", aluno.matricula);
    printf("Nome: %s\n", aluno.nome);
    printf("Curso: %s\n", aluno.curso);
    printf("Ano de nascimento: %d\n", aluno.ano_nascimento);

}

int main(){

    //stuct simples
    struct st_aluno aluno1;

    printf("Informe a matricula do aluno: ");
    scanf(" %s", aluno1.matricula);
    printf("Informe o nome do aluno: ");
    scanf(" %[^\n]", aluno1.nome);
    printf("Informe o curso do aluno: ");
    scanf(" %[^\n]", aluno1.curso);
    printf("Informe o ano de nascimento do aluno: ");
    scanf("%d", &aluno1.ano_nascimento);

    exibir(aluno1);

    int qnt_alunos;
    printf("\nInforme a quantidade de alunos: ");
    scanf("%d", &qnt_alunos);

    //array de struct
    struct st_aluno alunos[qnt_alunos];

    for(int i = 0; i < qnt_alunos; i++){
        printf("Informacoes do aluno %i\n", i+1);
        printf("Informe a matricula do aluno: ");
        scanf(" %s", alunos[i].matricula);
        printf("Informe o nome do aluno: ");
        scanf(" %[^\n]", alunos[i].nome);
        printf("Informe o curso do aluno: ");
        scanf(" %[^\n]", alunos[i].curso);
        printf("Informe o ano de nascimento do aluno: ");
        scanf("%d", &alunos[i].ano_nascimento);
    }

    for(int i = 0; i < qnt_alunos; i++){
        exibir(alunos[i]);
    }

    return 0;
}