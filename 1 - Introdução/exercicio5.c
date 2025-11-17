#include <stdio.h>

int main(){

    char nome[30];
    float salarioBruto;
    float inss = 11;
    float impostoDeRenda = 7.5;

    printf("Informe o nome do funcionário: ");
    scanf("%s", nome);
    printf("Infome o salário do funcionário: ");
    scanf("%f", &salarioBruto);

    float descontoInss = salarioBruto * (inss/100);
    float descontoIr = salarioBruto * (impostoDeRenda/100);

    float salarioLiquido = salarioBruto - descontoInss - descontoIr;

    printf("--------RESUMO--------");
    printf("\nNome: %s\nSalário BrutO : R$%.2f\nDesconto INSS: R$%.2f\nDesconto IR: R$%.2f\nSalário Líquido: R$%.2f", 
        nome, salarioBruto, descontoInss, descontoIr, salarioLiquido);

}