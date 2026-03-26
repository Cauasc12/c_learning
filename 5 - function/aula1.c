//Funções
#include <stdio.h>

//Prototipo de funções
int soma(int n1, int num2);

void prx_caractere(char caractere){
    printf("%c", caractere+1);
}

int main(){

    int n1, n2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero:  ");
    scanf("%d", &n2);

    printf("%d + %d = %d\n", n1, n2, soma(n1, n2));

    prx_caractere('c');

    return 0;
}

//Implementação de funções
int soma(int n1, int n2){
    return n1 + n2;
}