#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char nome[99];
    printf("Informe o nome: ");
    scanf("%s", nome);

    char sobrenome[99];
    fflush(stdin);
    printf("Informe o sobremnome: ");
    scanf("%s", sobrenome);

    for(int i = 0; i < strlen(sobrenome); i++){
        sobrenome[i] = toupper(sobrenome[i]);
    }

    for(int i = 0; i < strlen(nome); i++){
        if(i == 0){
            nome[i] = toupper(nome[i]);
        }
        else{
            nome[i] = tolower(nome[i]);
        }
    }

    printf("%s, %s", sobrenome, nome);

    return 0;
}