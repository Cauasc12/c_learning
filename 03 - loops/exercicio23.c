#include <stdio.h>

int main(){

    int teste, numero, soma = 0;

    printf("Informe o número a ser testado os múltiplos: ");
    scanf("%d", &teste);

    for(int i = 1; i <= 150; i++){
        printf("Informe o numero %d: ", i);
        scanf("%d", &numero);
        
        if(numero % teste == 0){
            soma += numero;
        }
    }

    printf("Soma dos números: %d", soma);

    return 0;
}