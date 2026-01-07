/*
Desenvolva um programa em C para gerenciar
votação eletrônica para uma eleição com 4
candidatos. O sistema deve permitir que eleitores
votem enquanto a votação estiver aberta, validar os
votos e gerar um relatório final com os resultados.
*/
#include <stdio.h>

int vencedor(int voto1, int voto2, int voto3, int voto4){

    int vencedor = voto1;
    if (voto2>voto1){
        vencedor = voto2;
        if (voto3>voto2){
            vencedor = voto3;
        }
        else if (voto4>voto2){
            vencedor = voto4;
        }
    }
    else if(voto3>voto1){
        vencedor = voto3;
        if (voto4>voto3){
            vencedor = voto4; 
        }
    }
    else if(voto4>voto1){
        vencedor = voto4;
    }
    //Retorno do número do candidato;
    if (vencedor == voto1){
        return 1;
    }
    else if (vencedor == voto2){
        return 2;
    }
    else if (vencedor ==voto3){
        return 3;
    }
    else if (vencedor == voto4){
        return 4;
    }
    return 0;
}

float percentual(int total, int voto){
    return ((float)voto/total) * 100.0;
}

int validaVoto(){
    int voto;

    do{
        printf("\nDigite o código do seu voto: ");
        scanf(" %d", &voto);

        if (voto>6 || voto<0){
            printf("\nCódigo Inválido! Digite um valor entre 1 e 6");
        }

    } while(voto > 6 || voto < 0);
    return voto;
}


int main(){

    int voto;
    int voto1 = 0;
    int voto2 = 0;
    int voto3 = 0;
    int voto4 = 0;
    int branco = 0;
    int nulo = 0;
    int eleitor = 1;

        printf("==========================\nSISTEMA DE VOTAÇÃO ELETRONICA\n==========================");
        printf("\nCandidatos:\n1 - Maria Sila\n2 - João Santos\n3 - Ana Costa\n4 - Pedro Oliveira\n5 - Voto Branco\n6 - Voto Nulo\n0 - Encerrar votação");
        printf("\n==========================");

        do{
        printf("\n\nEleitor %d:", eleitor);
    
        voto = validaVoto();
       
        switch (voto){
            case 1: printf("Voto Confirmado para: Maria Sila"); 
                    voto1++; eleitor++; break;
            case 2: printf("Voto Confirmado para: João Santos");
                    voto2++; eleitor++; break;
            case 3: printf("Voto Confirmado para: Ana Costa");
                    voto3++; eleitor++; break;
            case 4: printf("Voto Confirmado para: Pedro Oliveira");
                    voto4++; eleitor++; break;
            case 5: printf("Voto Confirmado para: Branco");
                    branco++; eleitor++; break;
            case 6: printf("Voto Confirmado para: Nulo");
                    nulo++; eleitor++; break;
            case 0: printf("Encerrando votação..."); 
                    break;
        }
    } while(voto != 0);
    int totalVotos = voto1+voto2+voto3+voto4+branco+nulo;

    printf("\n\n==========================\nRESULTADO DA ELEIÇÃO\n==========================");

    printf("\nTotal de eleitores: %d", eleitor);

    printf("\nVOTOS POR CANDIDATO:");
    printf("\n1 - Maria Silva: %d votos (%.2f%%)", voto1, percentual(totalVotos,voto1));
    printf("\n2 - João Santos: %d votos (%.2f%%)", voto2, percentual(totalVotos, voto2));
    printf("\n3 - Ana Costa: %d votos (%.2f%%)", voto3, percentual(totalVotos, voto3));
    printf("\n4 - Pedro Oliveira %d votos (%.2f%%)", voto4, percentual(totalVotos, voto4));
    printf("\n\nVoto Branco: %d", branco);
    printf("\nVoto nulo: %d", nulo);

    printf("\n==========================\n");
    int ganhador = vencedor(voto1, voto2, voto3, voto4);
    switch(ganhador){
        case 1: printf("VENCEDOR: Maria Silva com %d votos", voto1);
                break;
        case 2: printf("VENCEDOR: João Santoscom %d votos", voto2);
                break;
        case 3: printf("VENCEDOR: Ana Costa com %d votos", voto3);
                break;
        case 4: printf("VENCEDOR: Pedro Oliveira com %d votos", voto4);
                break;            
    }
    printf("\n==========================\n");

    int votosValidos = voto1+voto2+voto3+voto4;
    int votosInvalidos = branco+nulo;

    printf("\nVotos validos: %d (%.2f%%)", votosValidos, percentual(totalVotos, votosValidos));
    printf("\nVotos inválidos: %d (%.2f%%)", votosInvalidos, percentual(totalVotos, votosInvalidos));
    printf("\n==========================");

    return 0;
}