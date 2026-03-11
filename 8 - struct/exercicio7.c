#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NOME_FILME 500
#define GENERO_FILME 500
#define TOTAL_FILMES 3

struct st_filmes{
    char nome[500];
    char genero[500];
    int duracao;
    int posicao;
}filmes[TOTAL_FILMES];

void imprimirFilmeRanking(int ranking){
    for(int i = 0; i < TOTAL_FILMES; i++){
        if(filmes[i].posicao == ranking){
            printf("Nome: %s\n", filmes[i].nome);
            printf("Genero: %s\n", filmes[i].genero);
            printf("Duracao: %d minutos\n", filmes[i].duracao);
            printf("Posciao: %d\n", filmes[i].posicao);
        }
    }
}

void imprimirFilmesGenero(char genero[]){
    for(int i = 0; i < TOTAL_FILMES; i++){
        if(stricmp(filmes[i].genero,genero) == 0){
            printf("Nome: %s\n", filmes[i].nome);
            printf("Genero: %s\n", filmes[i].genero);
            printf("Duracao: %d minutos\n", filmes[i].duracao);
            printf("Posicao: %d\n", filmes[i].posicao);
        }
    }
}

int existeFilme(char nome[]){
    for(int i = 0; i < TOTAL_FILMES; i++){
        if(stricmp(filmes[i].nome,nome) == 0){
            return 1;
        }
    }
    return 0;
}

int main(){

    for(int i = 0; i < TOTAL_FILMES; i++){
        printf("Filme %d\n", i+1);
        printf("Nome: ");
        scanf(" %[^\n]", filmes[i].nome);
        printf("Gênero: ");
        scanf(" %[^\n]", filmes[i].genero);
        printf("Duracao(minutos): ");
        scanf("%d", filmes[i].duracao);
        printf("Posicao  no ranking: ");
        scanf("%d", filmes[i].posicao);
    }

    int ranking;
    printf("Informe o ranking do filme que deseja obet as informacoes: ");
    scanf("%d", &ranking);
    imprimirFilmeRanking(ranking);

    char genero[GENERO_FILME];
    printf("Infome o genero dos filmes: ");
    scanf(" %[^\n]", genero);
    imprimirFilmesGenero((genero));

    char nome[NOME_FILME];
    printf("Informe o nome do filme que deseja chegar na lista: ");
    scanf(" %[^\n]", nome);
    if(existeFilme(nome) == 1){
        printf("O filme %s está na sua lista de favoritos!\n", nome);
    }
    else{
        printf("O filme %s não está na sua lista de favoritos!\n", nome);
    }

    return 0;
}