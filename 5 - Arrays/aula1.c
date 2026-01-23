#include <stdio.h>

int main(){

//vetores e strings
char nome[50];
printf("Qual seu nome? ");
scanf("%s", nome);
printf("Olá %s\n", nome);

//vetores e caracteres
char letras[26];
int contador = 0;
for(int i = 97; i <= 122; i++ ){
    letras[contador] = i;
    contador++;
}
for(int i = 0; i < 26; i++){
    printf("%d == %c\n", letras[i], letras[i]);
}

//vetores e inteiros
int numeros[10];
for(int i = 0; i < 10; i++){
    numeros[i] = i+1;
}
printf("%d\n", numeros[4]);

//vetores e ponto flutuante
float valores[5];
for(int i = 0; i < 5; i++){
    valores[i] = (float)numeros[i]/2;
}
for(int i = 0; i < 5; i++){
    printf("%.2f\n", valores[i]);
}

 
    return 0;
}