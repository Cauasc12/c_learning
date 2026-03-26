#include <stdio.h>

int main(){

    //matrizes e strings/caracteres
    char nome[3][50];
    for(int i = 0; i < 3; i++){
        printf("Qual seu nome? ");
        scanf("%s", nome[i]);
    }
    for(int i = 0; i < 3; i++){
        printf("Olá %s\n", nome[i]);
    }

    //matrizes e inteiros
    int numeros[2][2];
    int valor = 1;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            numeros[i][j] = valor;
            valor++;
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Elemento[%d][%d] = %d\n", i, j, numeros[i][j]);
        }
    }

    printf("\n");

    //matrizes e ponto flutuante
    float valores[5][5];
    float valor2 = 1.5;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            valores[i][j] = valor2;
            valor2++;
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("Elemento[%d][%d] = %.1f\n", i, j, valores[i][j]);
        }
    }

    return 0;
}