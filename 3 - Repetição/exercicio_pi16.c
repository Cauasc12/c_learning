#include <stdio.h>

int main(){

int dentro = 0, fora = 0, limite;
float numero;

    printf("Informe a quantidade de números que quer testar: ");
    scanf("%d", &limite);

    for(int i = 1; i <= limite; i++){
        printf("Informe o numero: ");
        scanf("%f", &numero);

        if(numero >= 10 && numero <= 20){
            dentro++;
        }
        else{
            fora++;
        }
    }

    printf("----------RESULTADO----------");
    printf("\nNúmeros testados: %d", limite);
    printf("\nDentro do intervalo: %d", dentro);
    printf("\nFora do intervalo: %d\n", fora);

    return 0;
}