#include <stdio.h>

int verificacao(int numero){
    if (numero > 0 && numero <= 40){
        return 1;
    }
    return 0;
}

int main(){

    int final, contador = 1;

    printf("Informe o final da seqência(1-40): ");
    scanf("%d", &final);
    while(verificacao(final) == 0){
        printf("Numero inválido!! Informe novamente:");
        scanf("%d", &final);
    }

    while(contador <= final){
        printf("%d ", contador);
        contador++;
    }

    return 0;
}