#include <stdio.h>
#include <string.h>

int main(){

    char string[21];

    printf("Digite uma palavra: ");
    scanf("%s", string);


    for(int i = 0; i < strlen(string); i++){
        printf("%c\n", string[i]);
    }







    return 0;
}