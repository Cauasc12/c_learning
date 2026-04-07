#include <stdio.h>

int main(){

    FILE *file;
    int num, resultado, soma = 0;

    file = fopen("../arquivo2.txt", "r");

    if(file == NULL){
        printf("Arquivo nao encontrado!!");
    }
    else{
        while(!feof(file)){
            resultado = fscanf(file, "%d", &num);
            if(resultado == 1){
                soma += num;
            }
        }
    }
    printf("Soma dos números encontrados: %d", soma);

    fclose(file);
    return 0;
}