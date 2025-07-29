/*
(JOGO) Crie um programa em C que sorteia um número entre 1 e 100. Um jogador
(você ou outra pessoa) tenta adivinhar o número sorteado. Uma mensagem na tela deve
ser apresentada ao usuário, solicitando-o um palpite entre 1 e 100. Para cada palpite, o
programa deve informar se o palpite é maior, menor ou igual ao número sorteado. Caso
seja igual, o jogo termina e o jogador vence. Caso contrário, o jogador faz um novo palpite
para tentar acertar o número sorteado. Um jogador tem direito a fazer 10 palpites. Caso
ele não acerte o número nesses 10 palpites, o computador ganha o jogo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void jogo(int *num_aleatorio){
  int palpite, aux = 10;
  while(aux != 0){
    printf("Digite seu palpite: \n");
    scanf("%d", &palpite);
    if(palpite < *num_aleatorio){
      printf("O numero e maior \n");
    }else if(palpite > *num_aleatorio){
      printf("O numero e menor \n");
    }else if(palpite == *num_aleatorio){
      printf("Voce acertou! \n");
      break;
    }
    aux--;
    printf("Voce tem %d tentativas\n", aux);

  }
  if(aux == 0){
    printf("Voce chegou a 10 tentativas, o computador venceu! \n");
  }

}

int main(){

  int num_aleatorio;
  srand(time(NULL));
  num_aleatorio = rand()%100;

  jogo(&num_aleatorio);
  return 0;
}