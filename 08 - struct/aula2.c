#include <stdio.h>
#include <string.h>

//struct simples
struct st_contado{
    char nome[100];
    int ano_nascimento;
    char telefone[20];
    char email[100]; 
};

//struct que tem como variavel um outro struct
struct st_agenda{
    struct st_contado contatos[100];
};


int main(){

    //typedef -- redefine o tipo
    typedef struct st_agenda agenda; 
    //inicializa o struct
    agenda agenda1;

    int qntContados;
    printf("Informe a quantidade de contados: ");
    scanf("%d", &qntContados);

    for(int i = 0; i < qntContados; i++){
        printf("Adicione o contato %d\n", i+1);
        printf("Informe o nome: ");
        scanf(" %[^\n]", agenda1.contatos[i].nome);
        printf("Informe o ano de nascimento: ");
        scanf("%d", &agenda1.contatos[i].ano_nascimento);
        printf("Informe o telefone: ");
        scanf(" %s", agenda1.contatos[i].telefone);
        printf("Informe o email: ");
        scanf(" %s", agenda1.contatos[i].email);
    }

    for(int i = 0; i < qntContados; i++){
        printf("========CONTADO %d========\n", i+1);
        printf("Nome: %s\n", agenda1.contatos[i].nome);
        printf("Ano de nascimento: %d\n", agenda1.contatos[i].ano_nascimento);
        printf("Telefone: %s\n", agenda1.contatos[i].telefone);
        printf("Email: %s\n", agenda1.contatos[i].email);
    }

    return 0;
}