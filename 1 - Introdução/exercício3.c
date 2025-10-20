//Leia um valor e devolva o quadrado dele

#include <stdio.h>

int main() {

    int num;
    
    printf("Digite o número: ");
    scanf("%d", &num);

    int quadrado = num*num;
    
    printf("O quadrado de %d é %d", num, quadrado);

    return 0;
}