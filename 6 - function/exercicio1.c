#include <stdio.h>
#include <limits.h>

int maiorValor(int vetor[], int n){

    int maior = INT_MIN;
    for(int i = 0; i < n; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }  
    return maior;
}

int main(){


    int tamanho;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for(int i = 0; i < tamanho; i++){
        printf("Elemento %d:", i+1);
        scanf("%d", &vetor[i]);
    }

    int maior = maiorValor(vetor, tamanho);
    printf("Maior numero do vetor: %d", maior);

    return 0;
}