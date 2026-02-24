#include <stdio.h>

int main(){

    int gatos;

    printf("Informe a quantidade de gatos a serem castrados: ");
    scanf("%d", &gatos);

    int gatosPorVeterinario = gatos / 4;
    int gatosParaFormando = gatos % 4;

    if (gatos < 4){
        printf("4 gatos sobre responsabilidade dos 5 veterinários");
    }
    else{
        printf("%d gatos para cada veterinário e %d para o formando", gatosPorVeterinario, gatosParaFormando);
    }

}