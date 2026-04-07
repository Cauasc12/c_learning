#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){

    int tamanho;
    printf("Informe o tamanho da string: ");
    scanf("%d", &tamanho);

    char *ponteiro;
    ponteiro = (char*)malloc(tamanho*sizeof(char) + 1);

    printf("Informe a string: ");
    scanf(" %s", ponteiro);
    
    for(int i = 0; i < tamanho; i++){
        char caractere = tolower(*(ponteiro+i));
        if(caractere != 'a' && caractere != 'e' && caractere != 'i' && caractere != 'o' && caractere != 'u'){
            printf("%c", caractere);
        }
    }

    free(ponteiro);
    ponteiro = NULL;

    return 0;
}