#include <stdio.h>

int main(){

    int valores[5] = {1, 2, 3, 4, 5};

    printf("Valores informados\n");
    for(int i = 0; i< 5; i++){
        printf("%d - %ld bytes - %p\n", valores[i], sizeof(valores[i]), (valores+(i+1)));
    }
    printf("\n");

    printf("array valores possui %ld bytes", sizeof(valores));

    return 0;
}