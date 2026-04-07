#include <stdio.h>

int main(){

    FILE *file;

    int qntLinhas = 0;
    char c;
    char filename[99];
    
    printf("Informe o nome do arquivo: ");
    scanf(" %s", filename);

    file = fopen(filename, "r");

    if(file == NULL){
        printf("Arquivo não encontrado!!");
    }
    else{
        while((c = getc(file)) != EOF){
            if(c == '\n'){
                qntLinhas++;
            }
        }
        fclose(file);
        file = NULL;
    }


    printf("O arquivo tem %d linhas!", qntLinhas);
    
    return 0;
}