#include <stdio.h>
#include <stdlib.h>

int main(){

    int tamanho, *array;

    printf("Informe o tamanho do array: ");
    scanf("%d", &tamanho);

    array = (int*)malloc(tamanho*sizeof(int));

    if(array){
        for(int i = 0; i < tamanho; i++){
            printf("Elemento %d: ", i+1);
            scanf("%d", &array[i]);
        }

        for(int i = 0; i < tamanho; i++){
            printf("%d ", array[i]);
        } 
    }
    else{
        printf("Erro: Memoria insuficiente!!");
    }

    free(array);
    array = NULL;

    return 0;
}