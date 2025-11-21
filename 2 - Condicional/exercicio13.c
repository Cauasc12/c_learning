#include <stdio.h>

int main(){

    int operacao;
    float conta;

    printf("Informe o valor total da conta: ");
    scanf("%f", &conta);

    if (conta < 0 ){
        printf("Valor da conta inadequada!\n");
        printf("Informe o valor da conta novamente: ");
        scanf("%f", &conta);
    }

    printf("1 - Divisão simples\n2 - Divisão proporcional\n3 - Rateio com pesos diferentes\nInforme a forma de divisão da conta: ");
    scanf("%d", &operacao);

    float percentual1, percentual2, percentual3;
    int peso1, peso2, peso3;
    float valor1 = 0, valor2 = 0, valor3 = 0;

    switch(operacao){
        case 1: valor1 = conta/3;
                valor2 = valor1;
                valor3 = valor1;
                break;
        case 2: printf("Informe o percentualde consumo de cada estudante: ");
                scanf("%f %f %f", &percentual1, &percentual2, &percentual3);
                if (percentual1+percentual2+percentual3 > 100 || percentual1+percentual2+percentual3 < 100){
                    printf("A soma dos percentuais é diferente que 100\n");
                    printf("Informe os percentuais novamente: ");
                    scanf("%f %f %f", &percentual1, &percentual2, &percentual3); 
                }                  
                valor1 = conta*(percentual1/100);
                valor2 = conta*(percentual2/100);
                valor3 = conta*(percentual3/100);
                break;
        case 3: printf("Informe o peso de cada estudante: ");
                scanf("%d %d %d", &peso1, &peso2, &peso3);
                if (peso1+peso2+peso3 <= 0){
                    printf("Pesos inadequados!\n");
                    printf("Informe os pesos novamente: ");
                    scanf("%d %d %d", &peso1, &peso2, &peso3);
                }
                conta = conta / (peso1+peso2+peso3);
                valor1 = conta * peso1;
                valor2 = conta * peso2;
                valor3 = conta* peso3;
                break;
        default: printf("Operação inladida!!"); break;
        }
    
    printf("------RESUMO------");
    printf("\nEstudante 1: R$%.2f", valor1);
    printf("\nEstudante 2: R$%.2f", valor2);
    printf("\nEstudante 3: R$%.2f", valor3);

}