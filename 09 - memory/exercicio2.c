#include <stdio.h>
#include <stdlib.h>

int main(){

    int *vetor;
    vetor = calloc(3,sizeof(int));

    int tamanho;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if(tamanho > 3){
        realloc(vetor,tamanho*sizeof(int));
        if(vetor){
            for(int i = 0; i < tamanho; i++){
                printf("Elemento %d: ", i+1);
                scanf("%d", &vetor[i]);
            }

            for(int i = 0; i < tamanho; i++){
                printf("%d ", vetor[i]);
            }
        }
        else{
            printf("Erro: Memoria insuficiente!!");
        }
    }
    else{
        for(int i = 0; i < tamanho; i++){
                printf("Elemento %d: ", i+1);
                scanf("%d", &vetor[i]);
            }

            for(int i = 0; i < tamanho; i++){
                printf("%d ", vetor[i]);
            }
    }

    free(vetor);
    vetor = NULL;

    return 0;
}