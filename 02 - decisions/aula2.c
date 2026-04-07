//Stwitch

#include <stdio.h>

int main() {

    int valor;
    
    printf("Informe um valor de 1 a 7: ");
    scanf("%d", &valor);

    switch(valor) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Sábado\n");
            break;
        case 3:
            printf("Segunda\n");
            break;
        case 4:
            printf("Terça\n");
            break;
        case 5:
            printf("Quarta\n");
            break;
        case 6:
            printf("Quinta\n");
            break;
        case 7:
            printf("Sexta\n");
            
        default:
            printf("Valor incompatível!");
    }


    return 0;
}