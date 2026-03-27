#include <stdio.h>

int main(){

    FILE *file;
    char fruta[50];

    file = fopen("../arquivo3.txt", "a");

    if(file == NULL){
        printf("Não foi possível criar o arquivo!");
    }
    else{
        do{
            printf("Informe uma fruta ou 0 para sair: ");
            scanf("%s", fruta);
            if(fruta[0] != '0'){
                fprintf(file, "%s\n", fruta);
            
            }
        }while(fruta[0] != '0');
    }


    fclose(file);
    return 0;
}