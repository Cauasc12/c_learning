#include <stdio.h>

int main(){

    int vetor[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 10; i++){
        printf("Informe o valor %d de 10: ", i+1);
        scanf("%d", &vetor[i]);

        if(vetor[i] < 0){
            vetor[i] = 0;
        }
    }

    for(int i = 0; i <= 10; i++){
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}