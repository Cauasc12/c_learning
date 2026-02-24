#include <stdio.h>

int main(){

    int vetor[5];

    for(int i = 0; i < 5; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("O dobro de %d eh %d\n", *(vetor+i), *(vetor+i)*2);
    }

    return 0;
}