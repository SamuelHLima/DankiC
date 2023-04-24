#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    int idade;

    printf("olá! qual seu nome? \n");
    scanf("%s",&nome);

    printf("\nqual a sua idade?\n");
    scanf("%d",&idade);

    printf("Nome: %s\nIdade: %d\n", nome,idade);
    return 0;

    printf("\n Aguarde enquanto lemos seus dados...");

    printf("A primeira letra do seu nome é :%c",nome[0]);

    if(idade >= 18){
        printf("\n Voce e adulto");
        }else if (idade >= 12){
            printf("\n Voce e adolescente!");
        }else
        {printf("\nVoce e crianca");
            
        
    }

}