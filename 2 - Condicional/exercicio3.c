#include <stdio.h>

int main(){

    int numero;

    printf("Infome o número a ser testado: ");
    scanf("%d", &numero);

    int div1, div2;

    printf("Infome o primeiro divisor: ");
    scanf("%d", &div1);
    printf("Infome o primeiro divisor: ");
    scanf("%d", &div2);

    if (numero % div2 == 0){
        if (numero % div1 == 0){
            printf("NAÕ ATENDE A CONDIÇÃO!!");
        }
        else {
            printf("ATENDE A CONDIÇÃO");
        }
    }
    else if (numero % div1 == 0){
        if (numero % div2 == 0){
            printf("NAÕ ATENDE A CONDIÇÃO!!");
        }
        else {
            printf("ATENDE A CONDIÇÃO");
        }
    }
    else if (numero % div1 != 0 && numero != div2){
        printf("NÃO É DIVISÍVEL POR NENHUM DOS DOIS");
    }

}