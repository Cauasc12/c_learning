#include <stdio.h>

int main(){

    FILE *file;
    char linha[100];
    
    //nome do arquivo - forma de abertura do arquivo
    //w - abrir o arquivo para escrita(se o arquivo já existir será sobrescrito)
    //r - abrir o arquivo para leitura
    //a - abrir o arquivo para adição de conteudo
    file = fopen("arquivo.txt", "r");

    if(file == NULL){
        printf("Arquivo nao existe!");
        return 1;
    }
    else{
        while(fgets(linha, sizeof(linha), file) != NULL){
            printf("%s", linha);
        }
    }   

    //fechamento do arquivo
    fclose(file);

    return 0;
}