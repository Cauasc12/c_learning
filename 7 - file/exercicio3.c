#include <stdio.h>

int main(){

    FILE *file;

    char caractere, c, fileName[100];
    int contador = 0;

    printf("Informe o nome do arquivo: ");
    scanf(" %99s", fileName);
    printf("Informe o caractere que quer testar: ");
    scanf(" %c", &caractere);

    file = fopen(fileName, "r");

    if(file == NULL){
        printf("Arquivo não encontrado!");
    }
    else{
        while((c = getc(file)) != EOF){
            if(c == caractere){
                contador++;
            }
        }
        fclose(file);
        file = NULL;
    }

    printf("%c aparece %d vezes no arquivo %s", caractere, contador, fileName);

    return 0;
}