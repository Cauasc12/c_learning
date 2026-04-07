#include <stdio.h>
#include <string.h>

//Union - só pode ter um valor por vez, independente da quantidade de variáveis definidas nela
//separa e utiliza apenas o espaço na memoria correspondete ao utilizado pela  maior variável

union pessoa{
    char nome[100];
    int idade;
};

int main(){

    union pessoa pes;
    
    strcpy(pes.nome, "Angelina Jolie");
    printf("Dados de %s\n", pes.nome);

    pes.idade = 39;
    printf("Ela tem %d anos\n", pes.idade);

    printf("a variavel 'pes' ocupua %ld bytes\n", sizeof(pes));
    
    return 0;
}