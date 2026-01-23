#include <stdio.h>

int main(){

    int i, num, resultado = 0;

    for(i = 1; i <= 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &num);
        if(resultado == 0){
            resultado = num;
        }
        else if(num > resultado){
            resultado = num;
        }
    }

    printf("Resultado: %d", resultado);


    return 0;
}