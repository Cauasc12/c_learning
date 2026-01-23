#include <stdio.h>

double fatorial(int num){
    double resultado = 1;
    for(int i = num; i >= 1; i--){
        resultado *= i;
    }
    return resultado;
}

int main(){

    int qntNumeros;
    printf("Informe a quantidade de números a ser calculado o fatorial: ");
    scanf("%d", &qntNumeros);

    for(int i  = 1; i <= qntNumeros; i++){
        int num;
        printf("Informe a número a ser calculado o fatorial: ");
        scanf("%d", &num);

        printf("%d! = %.0f\n", num, fatorial(num));
    }

    return 0;
}