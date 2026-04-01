#include <stdio.h>

int binario(int n){
    if(n == 0) return n;
    else{
        return (n % 2 + 10 * binario(n / 2));
    }
}

int main(){

    int n;
    printf("Informe o numero que deja converter: ");
    scanf("%d", &n);

    printf("%d em binario é %d", n, binario(n));
    

    return 0;
}