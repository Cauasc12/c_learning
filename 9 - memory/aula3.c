#include <stdio.h>
#include <stdlib.h>

//Realloc - redefine o espaço de memoria(bytes) já alocado
//utilizado após o Calloc ou Malloc

int main(){

    int tamanho, *p;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    p = calloc(tamanho,sizeof(int)); //alocação da memoria

    if(p){

        printf("A variavel 'p[]' ocupa %ld bytes em memoria e tem endereco %p\n", tamanho*sizeof(int) , p);

        for(int i = 0; i < tamanho; i++){
            printf("Elemento %d: ", i+1);
            scanf("%d", &p[i]);
        }
        for(int i = 0; i < tamanho; i++){
            printf("A variavel 'p[%d]' vale %d e ocupa %ld bytes em memoria\n", i, p[i], sizeof(p[i]));
        }

        printf("Informe o novo tamanho do vetor: ");
        scanf("%d", &tamanho);
        realloc(p, tamanho*sizeof(int));

        printf("A variavel 'p[]' ocupa %ld bytes em memoria e tem endereco %p\n", tamanho*sizeof(int) , p);
         for(int i = 0; i < tamanho; i++){
            printf("Elemento %d: ", i+1);
            scanf("%d", &p[i]);
        }
        for(int i = 0; i < tamanho; i++){
            printf("A variavel 'p[%d]' vale %d e ocupa %ld bytes em memoria\n", i, p[i], sizeof(p[i]));
        }
    }
    else{
        printf("ERRO: Memoria insuficiente!!");
    }
    
    free(p); //desalocção da memoria
    p = NULL; //anulação do ponteiro

    return 0;
}