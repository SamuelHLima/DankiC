#include<stdio.h>
#include<stdlib.h>

int main(){
    int hora_cinema=20;
    int hora_atual=20;
    //posso entrar no cinema?
    if(hora_cinema > hora_atual + 30){
        printf("passou do tempo limite! não pode entrar");
        
    }else if (hora_atual<hora_cinema - 30)
    {printf("nem abriu a porta do cinema");
        
    }else{
        printf(" o horario está certo! pode entrar.");
    }
return 0;


}