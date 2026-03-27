#include <stdio.h>

int main(){

    FILE *file;

    //criando e preenchendo o arquivo
    char c;
    file = fopen("../arq.txt", "w");

    if(file == NULL){
        printf("Arquivo não pode ser criado");
    }
    else{
        do{
            printf("Informe caracter ou 0 para sair: ");
            scanf(" %c", &c);

            if(c != '0'){
                fprintf(file, "%c\n", c);
            }

        }while(c != '0');

        fclose(file);
    }

    //lendo e exibindo o arquivo
    file = fopen("../arq.txt", "r");
    char c2;

    if(file == NULL){
        printf("Arquivo não existe");
    }
    else{
        while((c2 = fgetc(file)) != EOF){
            printf("%c", c2);
        }

        fclose(file);
    }
    
    file = NULL;
    return 0;
}