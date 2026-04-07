#include <stdio.h>

//Union

union numeros{
    int num1, num2, num3, num4, num5;
}n;

int main(){

    int soma = 0;

    n.num1 = 1;
    printf("O valor de 'num1' é %d\n", n.num1);
    soma += n.num1;
    n.num2 = 3;
    printf("O valor de 'num2' é %d\n", n.num2);
    soma += n.num2;
    n.num3 = 5;
    printf("O valor de 'num3' é %d\n", n.num3);
    soma += n.num3;
    n.num4 = 7;
    printf("O valor de 'num4' é %d\n", n.num4);
    soma += n.num4;
    n.num5 = 9;
    printf("O valor de 'num5' é %d\n", n.num5);
    soma += n.num5;

    printf("O valor de 'num1' é %d\n", n.num1);
    printf("O valor de 'num2' é %d\n", n.num2);
    printf("O valor de 'num3' é %d\n", n.num3);
    printf("O valor de 'num4' é %d\n", n.num4);
    printf("O valor de 'num5' é %d\n", n.num5);

    printf("'n' esta ocupando %ld bytes\n", sizeof(n));

    printf("soma = %d\n", soma);
    printf("Memoria total ocupada %ld butes\n", sizeof(n) + sizeof(soma));

    
    return 0;
}