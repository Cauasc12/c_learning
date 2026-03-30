#include <stdio.h>

int somatorio(int n){

    if(n < 0){
        printf("Informe um valor positivo!");
        return 0;
    }
    if(n <= 1) return n;
    
    return n + somatorio(n - 1); 
}

int main(){

    int limite;
    printf("Informe o limite do somatorio: ");
    scanf("%d", &limite);

    printf("Somatorio de %d = %d", limite, somatorio(limite));

    return 0;
}