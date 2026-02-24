#include <stdio.h>
#include <ctype.h>

float custoViagem(float litrosConsumidos, float precoLitro){
    return litrosConsumidos * precoLitro;
}

float consumoMedio(float distancia, float litrosConsumidos){
    return distancia / litrosConsumidos;
}

float autonomia(float distancia, float litrosConsumidos, float litrosTanque){
    return litrosTanque * consumoMedio(distancia, litrosConsumidos);
}

float custoQuilometro(float valorGasto, float distancia){
    return valorGasto / distancia;
}

float litrosNoTanque(){
    float litrosTanque;
    printf("Informe a quantidade de litros restante no tanque: ");
    scanf("%f", &litrosTanque);
    return litrosTanque;
}

int main(){

    float dado1, dado2;

    printf("Informe o primeiro dado (distância, litros consumidos, valor gasto): ");
    scanf("%f", &dado1);
    printf("Informe o segundo dado (litros consumidos, preço do combustivel, distancia): ");
    scanf(" %f", &dado2);

    char tipo;
    
    printf("C -Custo da viagem\nM - Consumo médio\nA - Autonomia do veículo\nQ - custo por quilômetro\nInforme o tipo de cálculo:");
    scanf(" %c", &tipo);
    tipo = toupper(tipo);
    
    switch(tipo){
        case 'C': printf("Custo da viagem: R$%.2f", custoViagem(dado1, dado2)); break;
        case 'M': printf("Consumo médio: %.2fKm/L", consumoMedio(dado1, dado2)); break;
        case 'A': printf("Autonomia do veículo: %.2f", autonomia(dado1, dado2, litrosNoTanque())); break;
        case 'Q': printf("Custo por quilômetro: R$%.2f", custoQuilometro(dado1, dado2)); break;
        default: printf("Operação inválida!!"); break;
    }
    
}