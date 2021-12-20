#include <stdio.h>

//imprime cabeçalho do nosso jogo
int main(){
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numero_secreto = 42;

    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d",&chute);
    printf("Seu chute foi: %d \n",chute);
    
}