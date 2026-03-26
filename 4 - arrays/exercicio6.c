#include <stdio.h>

int main(){

    int numeros[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &numeros[i]);
    }

    int ultimoNumero = numeros[9];
    int qntRepeticoes = 0;

    for(int i = 0; i< 10; i++){
        if(numeros[i] == ultimoNumero){
            qntRepeticoes++;
        }
    }

    printf("O numero %d apareceu %d vezes", ultimoNumero, qntRepeticoes);



    return 0;
}