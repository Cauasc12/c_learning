#include <stdio.h>

int main(){

    int vetor[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int pares = 0;

    for (int i = 0; i < 10; i++){
        printf("Informe o valor %d de 10: ", i+1);
        scanf("%d", &vetor[i]);
        
    }

    for (int i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
            printf("%d é par\n", vetor[i]);
            pares++;
        }
        
    }

    printf("O vetor tem %d valores pares", pares);


    return 0;
}