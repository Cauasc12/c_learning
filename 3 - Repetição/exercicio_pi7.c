#include <stdio.h>

int main(){

    float total = 0, nota, media;

    for(int j = 1; j <= 75; j++){
    total = 0;

    for(int i = 1; i <= 10; i++){
        printf("Informe a nota no critério %d: ", i);
        scanf("%f", &nota);

        total += nota;
    }

    media = total / 10;
    printf("Média do estudante %d: %.2f\n", j, media);
    
    }

    return 0;
}