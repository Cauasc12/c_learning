//Variáveis

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Qual sua idade? ");

    scanf("%d", &idade);
    printf("A sua idade é %d", idade);

    return 0;
}