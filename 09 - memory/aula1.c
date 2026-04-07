#include <stdio.h>
#include <stdlib.h>

//Malloc - aloca memoria(bytes) em um ponteiro
//retorna um ponteiro void, logo deve-se fazer typecasting (int*)

int main(){

    int tamanho, *p;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    p = (int*)malloc(tamanho*sizeof(int)); //alocação da memoria

    if(p){

        printf("Valoers antes da instanciação\n");
        for(int i = 0; i < tamanho; i++){
        printf("Elemento %d: %d\n", i+1, p[i]);
        }   
        
        printf("Defina os novos valores do vetor\n");
        for(int i = 0; i < tamanho; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &p[i]);
        }

        for(int i = 0; i < tamanho; i++){
            printf("A variavel 'p[%d]' vale %d e ocupa %ld bytes em memoria\n", i, p[i], sizeof(p[i]));
        }
        printf("A variavel 'p[]' ocupa %ld bytes em memoria e tem endereco %p\n", tamanho*sizeof(int) , p);

    }
    else{
        printf("ERRO: Memoria insuficiente!!");
    }

    free(p); //desalocção da memoria
    p = NULL; //anulação do ponteiro

    return 0;
}