#include <stdio.h>

struct st_monstro{
    char nome[20];
    int id;
    int level;
    int vida;
    int ataque;
    int defesa;
};

int main(){

    int x;
    scanf("%d", &x);

    struct st_monstro Monstros[x];

    for(int i = 0; i < x; i++){
        scanf(" %[^\n]", Monstros[i].nome);
        scanf("%d", &Monstros[i].id);
        scanf("%d", &Monstros[i].level);
        scanf("%d", &Monstros[i].vida);
        scanf("%d", &Monstros[i].ataque);
        scanf("%d", &Monstros[i].defesa);
    }

    for(int i = 0; i < x; i++){
        printf("Nome: %s\n", Monstros[i].nome);
        printf("ID: %d\n", Monstros[i].id);
        printf("Level: %d\n", Monstros[i].level);
        printf("Vida: %d\n", Monstros[i].vida);
        printf("Ataque: %d\n", Monstros[i].ataque);
        printf("Defesa: %d\n", Monstros[i].defesa);
    }

    return 0;
}