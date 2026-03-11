#include <stdio.h>

struct st_passageiro{
    int numeroPassagem;
    char data[11];
    char origem[99];
    char destino[99];
    char horario[6];
    int poltrona;
    int idade;
    char nomePassageiro[99];
};

int main(){

    struct st_passageiro Passageiros[44];
    int contador = 0, somaIdades = 0;

    while(scanf("%d", &Passageiros[contador].numeroPassagem) == 1 && Passageiros[contador].numeroPassagem != -1){
        scanf(" %[^\n]", Passageiros[contador].data);
        scanf(" %[^\n]", Passageiros[contador].origem);
        scanf(" %[^\n]", Passageiros[contador].destino);
        scanf(" %[^\n]", Passageiros[contador].horario);
        scanf("%d", &Passageiros[contador].poltrona);
        scanf("%d", &Passageiros[contador].idade);
        scanf(" %[^\n]", Passageiros[contador].nomePassageiro);

        somaIdades += Passageiros[contador].idade;
        contador++;
    }

    if(contador > 0){
        float mediaIdades = (float)somaIdades / contador;

        for(int i = 0; i < contador; i++){
            if(Passageiros[i].idade > mediaIdades && Passageiros[i].poltrona % 2 == 0){
                printf("%s\n", Passageiros[i].nomePassageiro);
            }
    }   
    }
    else{
        prinf("Nenhum passageiro cadastrado!!\n");
    }

    return 0;
}