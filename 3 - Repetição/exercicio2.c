//programa que declare um inteiro, inicialize-o com 0, incremente-o de 100 em 100, imprimindo seu valor na tela, 
//até que seu valor seja 100000 (cem mil)

#include <stdio.h>

int main() {

    int num = 0;

    while (num <= 100000) {

        printf("%d\n", num);
        num += 100;
    }

    return 0;
}