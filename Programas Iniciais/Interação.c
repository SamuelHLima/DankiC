#include <stdio.h>
#include <stdlib.h>

int main() {

    char nome[256];
    char sobrenome[256];
    int ano_nascimento;
    int idade;

    printf("Qual seu nome?\n");
    scanf("%s",nome);

    printf("\nShow de bola, %s", nome);

    return 0;

}