#include <stdio.h>

void funcao(int n){

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            printf("!");
        }
        printf("\n");
    }
   
}

int main(){

    int n;

    printf("Informe um número: ");
    scanf("%d", &n);

    funcao(n);


    return 0;
}