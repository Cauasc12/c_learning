#include <stdio.h>

int main(){

    int qntNotas = 0, nota;

    for(int i = 1; i <= 12; i++){
        printf("Digite a nota %d do aluno: ", i);
        scanf("%d", &nota);

        if (nota >= 6){
            qntNotas++;
        }
    }

    if (qntNotas < 7){
        printf("REPROVADO!!");
    }
    else{
        printf("APROVADO!!");
    }

    return 0;
}