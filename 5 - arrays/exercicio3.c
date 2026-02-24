#include <stdio.h>
#include <string.h>

int main(){

    int qntTestes;
    scanf("%d", &qntTestes);
    
    char numero[100];
    char temp;

    for(int i = 0; i < qntTestes; i++){

        scanf("%s", numero);
        int tamanho = strlen(numero);

        for(int j = 0; j < tamanho; j++){
            for(int k = j+1; k < tamanho; k++){
                if(numero[j] < numero[k]){
                    temp = numero[j];
                    numero[j] = numero[k];
                    numero[k] = temp;
                }
            }
        }
        printf("Caso %d: %s\n", i+1, numero);
    }


    return 0;
}