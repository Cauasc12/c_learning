#include <stdio.h>

int main(){

    int cv, ce, cs, fv, fe, fs;

    printf("Informe as vitórias, empates e saldo de gol: ");
    scanf("%d %d %d %d %d %d", &cv, &ce, &cs, &fv, &fe, &fs);
    
    if (cv > fv){
        printf("C");
    }
    else if (fv > cv){
        printf("F");
    }
    else if (ce > fe){
        printf("C");
    }
    else if (fe > ce){
        printf("F");
    }
    else if (cs > fs){
        printf("C");
    }
    else if (fs > cs){
        printf("F");
    }
    else {
        printf("=");
    }
    
}