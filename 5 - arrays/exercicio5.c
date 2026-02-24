#include <stdio.h>

int main(){

    int n, m, k;

    scanf("%d %d %d", &n, &m, &k);  

    int fila1[n];
    int fila2[m];

    int tamanhoFila = n+m;
    int filaUnica[tamanhoFila];

    for(int i = 0; i < n; i++){
        scanf("%d", &fila1[i]);
    }
    for(int i = 0; i < m; i++){
        scanf("%d", &fila2[i]);
    }

    int p1 = 0, p2 = 0, pU = 0;

    while(p1 < n || p2 < m){

        if(k == 1){
            if(p2 < m){
                filaUnica[pU] = fila2[p2];
                p2++;
                pU++;
            }
            if(p1 < n){
                filaUnica[pU] = fila1[p1];
                p1++;
                pU++;
            }
        }
        else{
            if(p1 < n){
                filaUnica[pU] = fila1[p1];
                p1++;
                pU++;
            }
            if(p2 < m){
                filaUnica[pU] = fila2[p2];
                p2++;
                pU++;
            }
        }
    }

    printf("\n");
    for(int i = 0; i < tamanhoFila; i++){
        printf("%d\n", filaUnica[i]);
    }

    return 0;
}