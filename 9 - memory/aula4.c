#include <stdio.h>
#include <stdlib.h>


int main(){

    int linhas, colunas, *matriz;

    printf("Informe a quantidade de linhas e colunas: ");
    scanf("%d %d", &linhas, &colunas);

    matriz = (int*)malloc(linhas*colunas*sizeof(int));

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[(i*colunas) + j]);
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz[(i*colunas) + j]);
        }
        printf("\n");
    }

    free(matriz);
    matriz = NULL;

    return 0;
}