#include <stdio.h>

int main(){
    
    int numeroLido;

    printf("Informe um número: ");
    scanf("%d", &numeroLido);

    int unidade = numeroLido / 100;
    int dezena = (numeroLido % 100) / 10 * 10;
    int centena = (numeroLido % 10) * 100;
    
    int numeroGerado = centena + dezena + unidade;

    printf("%d\n", numeroGerado);

    if (numeroLido > numeroGerado){
        printf("O número lido é MAIOR que o número gerado");
    }
    else if (numeroLido < numeroGerado){
        printf("O número lido é MENOR que o número gerado");
    }
    else {
        printf("O número lido é IGUAL ao número gerado");
    }

}