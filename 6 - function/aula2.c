//Criação de biblioteca
#include <stdio.h>
#include "ajuda.h"

int main(){

    int n1, n2, retS, retM;

    mensagem();

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    retS = soma(n1, n2);
    printf("%d  + %d = %d\n", n1, n2, retS);
    
    retM = multiplicacao(n1, n2);
    printf("%d * %d = %d\n", n1, n2, retM);

    return 0;
}