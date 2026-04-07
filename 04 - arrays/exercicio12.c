#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char string1[21];
    char string2[21];
    char string3[21];

    printf("Informe a primeira palavra: ");
    scanf("%s", string1);
    fflush(stdin);
    printf("Informe a segunda palavra: ");
    scanf("%s", string2);
    fflush(stdin);
    printf("Informe a terceira palavra: ");
    scanf("%s", string3);

    for(int i = 0; i < strlen(string1); i++){
        string1[i] = tolower(string1[i]);
    }

    for(int i = 0; i < strlen(string2); i++){
        string2[i] = tolower(string2[i]);
    }
    
    for(int i = 0; i < strlen(string3); i++){
        string3[i] = tolower(string3[i]);
    }


    if(strcmp(string1, string2) <= 0){
        if(strcmp(string1, string3) <= 0){
            if(strcmp(string2, string3) <= 0){
                printf("Ordem: %s %s %s", string1, string2, string3);
            }
            else{
                printf("Ordem: %s %s %s", string1, string3, string2);
            }
        }
        else {
            printf("Ordem: %s %s %s", string3, string1, string2);
        }
    }
    else{
        if(strcmp(string2, string3) <= 0){
            if(strcmp(string1, string3) <= 0){
                printf("Ordem: %s %s %s", string2, string1, string3);
            }
            else{
                printf("Ordem: %s %s %s", string2, string3, string1);
            }
        }
        else {
            printf("Ordem: %s %s %s", string3, string2, string1);
        }
    }


    return 0;
}