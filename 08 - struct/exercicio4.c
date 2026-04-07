#include <stdio.h>

struct st_usuario{
    int idade;
    char nome[50];
    char sexo;
    char estadoCivil;
    int qntAmigos;
    int qntFotos;
};

int main(){
    
    int n;
    scanf("%d", &n);

    struct st_usuario Usuarios[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &Usuarios[i].idade);
        scanf(" %[^\n]", Usuarios[i].nome);
        scanf(" %c", &Usuarios[i].sexo);
        scanf(" %c", &Usuarios[i].estadoCivil);
        scanf("%d", &Usuarios[i].qntAmigos);
        scanf("%d", &Usuarios[i].qntFotos);
    }

    for(int i = 0; i < n; i++){
        printf("Idade: %d\n", Usuarios[i].idade);
        printf("Nome: %s\n", Usuarios[i].nome);
        printf("Sexo %c\n", Usuarios[i].sexo);
        printf("Estado Civil: %c\n", Usuarios[i].estadoCivil);
        printf("Numero de amigos: %d\n", Usuarios[i].qntAmigos);
        printf("Numero de fotos: %d\n", Usuarios[i].qntFotos);
        printf("\n");
    }

    return 0;
}