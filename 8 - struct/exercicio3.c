#include <stdio.h>

struct st_habitante{
    char sexo;
    char corDoOlho;
    char cabelo;
    int idade;
};

int main(){

    typedef struct st_habitante habitante;

    habitante habitantes[100];
    
    int contMulheres = 0, idade, maisVelho, i = 0;
    scanf("%d", &idade);
    while(idade != -1){
        habitantes[i].idade = idade;
        scanf(" %c %c %c", &habitantes[i].sexo, &habitantes[i].cabelo, &habitantes[i].corDoOlho);
        
        if(i == 0){
            maisVelho = habitantes[i].idade;
        }
        if(idade > maisVelho){
            maisVelho = idade;
        }
        
        if(habitantes[i].sexo == 'f' && habitantes[i].idade >=18 && habitantes[i].idade <=35 && habitantes[i].cabelo == 'l' && habitantes[i].corDoOlho == 'v'){
            contMulheres++;
        }
        i++;
        scanf("%d", &idade);
    }

    printf("Mais velho: %d\n", maisVelho);
    printf("Mulheres com olhos verdes, loiras com 18 a 35 anos: %.2f%%", (float)contMulheres/(float)i * 100);


    return 0;
}