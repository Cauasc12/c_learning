#include <stdio.h>
#include <ctype.h>

char maiusculo(char c){
    return toupper(c);
}

int main(){

    char c;

    printf("Informe um caractere: ");
    scanf(" %c", &c);

    printf("Caractere maiusculo: %c", maiusculo(c));



    return 0;
}