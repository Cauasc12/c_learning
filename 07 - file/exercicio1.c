#include <stdio.h>

int main(){

    FILE *file1, *file2;

    //criando e preenchendo o arquivo
    char caractere;
    file1 = fopen("../arq.txt", "w");

    if(file1 == NULL){
        printf("Arquivo não pode ser criado");
    }
    else{
        do{
            printf("Informe caracter ou 0 para sair: ");
            scanf(" %c", &caractere);

            if(caractere != '0'){
                fprintf(file1, "%c\n", caractere);
            }

        }while(caractere != '0');

        fclose(file1);
        file1 = NULL;
    }

    //lendo e exibindo o arquivo
    file2 = fopen("../arq.txt", "r");

    if(file2 == NULL){
        printf("Arquivo não existe");
    }
    else{
        while((caractere = fgetc(file2)) != EOF){
            printf("%c", caractere);
        }

        fclose(file2);
        file2 = NULL;
    }
    
    return 0;
}