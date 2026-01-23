#include <stdio.h>
#include <math.h>

int main(){

    int numero;

    printf("Informe a base da operação: ");
    scanf("%d", &numero);

    for(int i = 1; i <= 10; i++){
        printf("%d^%d = ", numero, i);

        for(int j = 1; j <= i; j++){
            printf("%d", numero);
            if (j < i){
                printf(" * ");
            }
        }

        float resultado = pow(numero, i);
        printf(" = %.0f\n", resultado);
    }
    
    return 0;
}