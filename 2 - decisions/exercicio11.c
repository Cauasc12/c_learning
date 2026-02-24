#include <stdio.h>

int main(){

    int idade;
    float altura;

    printf("Informe sua altura em cm: ");
    scanf("%f", &altura);
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    int brinquedo = 0;

    if (altura >= 150 && idade >= 12){
        brinquedo += 1;
    }
    if (altura >= 140 && idade >= 14){
        brinquedo += 1;
    }
    if (altura >= 170 && idade >= 16){
        brinquedo += 1;
    }

    printf("A pessoa pode andar em %d brinquedos", brinquedo);

}