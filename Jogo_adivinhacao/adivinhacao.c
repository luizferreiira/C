#include <stdio.h>

//#define NUMERO_TENTATIVAS 5

//imprime cabeçalho do nosso jogo
int main(){
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numero_secreto = 42;

    int chute; // int, long e short guardam números inteiros.
    int ganhou = 0;
    int tentativas = 1;
    double pontos = 1000; // double e float guardam números com casas decimas.

    

    //for(int i = 1; i <= NUMERO_TENTATIVAS; i++){
    while(ganhou == 0){

        printf("Tentativa %d \n",tentativas);
        printf("Qual é o seu chute? ");
        scanf("%d",&chute);
        printf("Seu chute foi: %d \n",chute);

        if(chute < 0){
            printf("Você não pode chutar números negativos \n");
            continue;
        }

        int acertou = (chute == numero_secreto);
        int maior = (chute > numero_secreto);

        if(acertou){
            printf("Parabéns, você acertou! \n");
            printf("Jogue de novo, você é um bom jogador! \n");
            //break;
            ganhou = 1; // posso usar o break tbm
        }

        else if(maior){
            printf("Seu chute foi maior que o número secreto \n");
        }

        else{
            printf("Seu chute foi menor que o número secreto \n");
        }

        tentativas++;
        double pontosPerdidos = (chute - numero_secreto)/2.0;
        pontos = pontos - pontosPerdidos;
    }
    printf("Fim de jogo \n");
    printf("Você acertou em %d tentativas! \n ",tentativas-1);
    printf("Total de pontos: %.2f\n", pontos);
    
} // PAREI EM "CONVERTENDO TIPOS DE VARIÁVEIS" OBS: IGNORE ESSE COMENTÁRIO.