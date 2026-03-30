#include <stdio.h>

//Recursividade - ato de uma função chamar a si mesma

int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fib(n - 1) + fib(n - 2);
}

int main(){

    int qnt;

    printf("Informe o tamanho da sequencia fibonacci: ");
    scanf("%d", &qnt);

    for(int i = 1; i <= qnt; i++){
        printf("%d\n", fib(i));
    }

    return 0;
}