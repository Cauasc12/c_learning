#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int numeros[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &numeros[i]);
    }
    
    int temp;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(numeros[i] > numeros[j]){
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("[%d]", numeros[i]);
    }
    printf("\n");


    return 0;
}