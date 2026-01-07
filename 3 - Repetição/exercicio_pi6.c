#include <stdio.h>

float validarPh(float ph){
    if (ph >= 0 && ph <= 14){
        return 1;
    }
    return 0;
}

float classificarPh(float ph){
    if (ph < 3){
        return 1;
    }
    else if (ph < 7){
        return 2;
    }
    else if (ph == 7){
        return 3;
    }
    else if(ph <= 11){
        return 4;
    }
    else{
        return 5;
    }
    return 0;
}

float porcentagem(int total, int parcial){
    return ((float)parcial/total) * 100;    
}

int main(){

    char continuar;
    float ph;
    int classificacao, qntSubstancias = 0, acidoForte = 0, acidoFraco = 0, neutro = 0, basicoForte = 0, basicoFraco = 0;

    do{
        printf("Informe o ph da substância: ");
        scanf("%f", &ph);

        while(validarPh(ph) == 0){
            printf("PH inválido, informe um valor entre 0 e 14: ");
            scanf("%f", &ph);
        }

        classificacao = classificarPh(ph);
        switch(classificacao){
            case 1: printf("A Substância é um Ácido Forte!");
                    acidoForte++; break;
            case 2: printf("A Substância é um Ácido Fraco!");
                    acidoFraco++; break;
            case 3: printf("A Substância é Neutra!");
                    neutro++; break;
            case 4: printf("A Substância é uma Base Fraca!");
                    basicoFraco++; break;
            case 5: printf("A Substância é uma Base Forte!");
                    basicoForte++; break;
            default: printf("ERRO!!!");
        }

        printf("\nDeseja continuar(s/n): ");
        scanf(" %c", &continuar);
        qntSubstancias++;
    } while(continuar == 's' || continuar == 'S');


    printf("------------RELATÓRIO------------\n");
    printf("Total de Substâncias: %d\n", qntSubstancias);
    printf("Acido Forte: %d (%.2f%%)\n", acidoForte, porcentagem(qntSubstancias, acidoForte));
    printf("Acido Fraco: %d (%.2f%%)\n", acidoFraco, porcentagem(qntSubstancias, acidoFraco));
    printf("Neutro: %d (%.2f%%)\n", neutro, porcentagem(qntSubstancias, neutro));
    printf("Base Fraca: %d (%.2f%%)\n", basicoFraco, porcentagem(qntSubstancias, basicoFraco));
    printf("Base Forte: %d (%.2f%%)\n", basicoForte, porcentagem(qntSubstancias, basicoFraco));
    printf("Substâncias perigosas: %d (%.2f%%)\n", basicoForte+acidoForte, porcentagem(qntSubstancias, basicoForte+acidoForte));

    return 0;
}