#include <stdio.h>
#include <math.h>

int main(){

    int numero;

    printf("Informe o expoente da operação: ");
    scanf("%d", &numero);

    for(int i = 1; i <= 10; i++){
        printf("%d^%d = ", i, numero);

        for(int j = 1; j <= numero; j++){
            printf("%d", i);
            if (j < numero){
                printf(" * ");
            }
        }

        float resultado = pow(i, numero);
        printf(" = %.0f\n", resultado);
    }
    
    return 0;
}