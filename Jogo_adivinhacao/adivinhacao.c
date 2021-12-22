#include <stdio.h>

#define NUMERO_TENTATIVAS 5

//imprime cabeçalho do nosso jogo
int main(){
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numero_secreto = 42;

    int chute;

    for(int i = 1; i <= NUMERO_TENTATIVAS; i++){

        printf("Tentativa %d de %d \n",i,NUMERO_TENTATIVAS);
        printf("Qual é o seu chute? ");
        scanf("%d",&chute);
        printf("Seu chute foi: %d \n",chute);

        if(chute < 0){
            printf("Você não pode chutar números negativos \n");
            i--;

            continue;
        }

        int acertou = (chute == numero_secreto);
        int maior = (chute > numero_secreto);
        int menor = (chute < numero_secreto);

        if(acertou){
            printf("Parabéns, você acertou! \n");
            printf("Jogue de novo, você é um bom jogador! \n");
            break;
        }

        else if(maior){
            printf("Seu chute foi maior que o número secreto \n");
        }

        else{
            printf("Seu chute foi menor que o número secreto \n");
        }
    }
    printf("Fim de jogo \n");
    
} // PAREI EM "MAIS REFATORAÇÕES" OBS: IGNORE ESSE COMENTÁRIO.