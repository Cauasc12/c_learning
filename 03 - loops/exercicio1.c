//programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0

#include <stdio.h>

int main() {

    int numero = 1;
    int contador = 0;

    printf("Os 5 primeiros múltiplos de 3 são:\n");

    while (contador < 5) {

        if (numero % 3 == 0) {
            
            printf("O número %d é múltiplo de 3\n", numero);
            contador +=1;
        }
        numero += 1;
    }

    return 0;
}