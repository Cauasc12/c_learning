#include <stdio.h>

int main(){

    int qntNumeros;
    do{
    printf("Informe a quantidade de números a serem lidos: ");
    scanf("%d", &qntNumeros);
    if (qntNumeros <= 0){
        printf("Quantidade de números inválido!\n");
    }
    } while(qntNumeros <= 0);

    int menor, soma = 0;

    for(int i = 1; i <= qntNumeros; i++){
        int n;
        printf("Informe o número %d:", i);
        scanf("%d", &n);
        
        if (i == 1){
            menor = n;
        }
        else if(n < menor){
            menor = n;
        }

        soma += n;
    }

    float media = (float)soma / qntNumeros;

    printf("-----------RESUMO-----------");
    printf("\n número: %d", menor);
    printf("\nSoma dos %d números: %d", qntNumeros, soma);
    printf("\nMédia dos %d núneros: %.2f\n", qntNumeros, media);

    return 0;
}