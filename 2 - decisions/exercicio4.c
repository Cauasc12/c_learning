#include <stdio.h>

int main(){

    int passageiros;
    int coletivo = 0;
    int viagens = 0;

    printf("Informe o número de passageiros: ");
    scanf("%d", &passageiros);
    
    if (passageiros <= 11) {
        viagens = 1;
    }
    else if (passageiros > 11){
        viagens = passageiros / 11;
        coletivo = passageiros % 11;
    }

    printf("%d viagens de kombi e %d passagens em coletivo para %d pessoas", viagens, coletivo, passageiros);

}