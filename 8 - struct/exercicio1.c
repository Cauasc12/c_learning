#include <stdio.h>

struct st_pessoa{
    char nome[100];
    int idade;
    char endereco[200];
};

int main(){
    
    int qntPessoas;
    printf("Informe a quantidade de pessoas: ");
    scanf("%d", &qntPessoas);

    struct st_pessoa Pessoas[qntPessoas];

    for(int i = 0; i < qntPessoas; i++){
        printf("Pessoa %d\n", i+1);
        printf("Informe o nome: ");
        scanf(" %[^\n]", Pessoas[i].nome);
        printf("Infome a idade: ");
        scanf("%d", &Pessoas[i].idade);
        printf("Informe o endereco: ");
        scanf(" %[^\n]", Pessoas[i].endereco);
    }

    for(int i = 0; i < qntPessoas; i++){
        printf("Nome: %s\n", Pessoas[i].nome);
        printf("Idade: %d\n", Pessoas[i].idade);
        printf("Endereco: %s\n", Pessoas[i].endereco);
    }

    return 0;
}