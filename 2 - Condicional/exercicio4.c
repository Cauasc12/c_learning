#include <stdio.h>
#include <string.h>

int main(){

    float peso, altura;

    printf("Informe seu peso: ");
    scanf("%f", &peso);
    printf("Informe sua altura: ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    char resultado[50];

    if (imc >= 40){
        strcpy(resultado, "Obesidade Grau III(mórbida)");
    }
    else if (imc >= 35){
        strcpy(resultado, "Obesidade Grau II(severa");
    }
    else if (imc >= 30){
        strcpy(resultado, "Obesidade Grau I");
    }
    else if (imc >= 25){
        strcpy(resultado, "Sobrepeso");
    }
    else if (imc >= 18.5){
        strcpy(resultado, "Saudável");
    }
    else {
        strcpy(resultado, "Magreza");
    }

    printf("IMC: %.2f\n", imc);
    printf("Classificação: %s", resultado);
}