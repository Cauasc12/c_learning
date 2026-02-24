//programa que leia 10 números e escreva o maior e o menor valor lido

#include <stdio.h>

int main() {

    int num = 0;
    int maior = 0;
    int menor = 0;

    printf("Informe um valor: ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    for(int i = 2; i <= 10; i++) {
        
        printf("Informe o valor %d: ", i);
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }

    printf("O maior valor foi %d\n", maior);
    printf("O menor valor foi %d", menor);

    return 0;
}