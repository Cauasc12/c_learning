#include <stdio.h>
#include <math.h>

int main(){

    double somatorio = 0, termo; 

    for (int i = 0; i <= 25; i++){
        termo = pow(9,i);
        somatorio += termo;

        printf("Termo n = %d: 9^%d = %.0f\n", i, i, termo);
    }

    printf("Resultado do somatório = %e", somatorio);

    return 0;
}