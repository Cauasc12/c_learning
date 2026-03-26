#include <stdio.h>
#include <string.h>

int main(){

    char string[15];

    printf("Digite uma palavra: ");
    scanf("%s", string);

    char letra;

    fflush(stdin);
    printf("Quer saber a posição de qual letra? ");
    scanf("%c", &letra);

    int posicao = -1;

    for(int i = 0; i < strlen(string); i++){
        if(string[i] == letra){
            posicao = i;
            break;
        }
    }   

    if(posicao >= 0){
        printf("Posição da letra %c na palavra %s é %d", letra, string, posicao);
    }
    else{
        printf("Não ha ocorrencia da letra %c na palavra %s", letra, string);
    }






    return 0;
}