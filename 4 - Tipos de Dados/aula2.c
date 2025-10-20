//Tipos alfanuméricos

/*
Tipos Alfanuméricos:
	- Characteres;
	- Strings*;

	Na linguagem C, não existe o tipo de dado String.

	Ex: String
	"abasfadfa fadsf adf asf af dasf asf asdf";

	Ex: Caractere
	's';
*/

#include <stdio.h>

int main() {

    char nome[5]; //String de até 49 caracteres

    printf("Qual é seu nome? ");
    gets(nome);

    printf("Seu nome é %s", nome);

    return 0;
}