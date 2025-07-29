/*
Crie um programa para imprimir 100 números pseudo-aleatórios no intervalo [−15, 15].
Utilize as funções rand() e srand() da biblioteca stdlib.h, além da função time() da
biblioteca time.h
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void num_aleatorio(int *vet){
  for(int i = 0; i < 100; i++){
    vet[i] = -15+rand()%31;
    printf("%d ", vet[i]);
    if(vet[i] < -15){
      printf("ERRO MENOR\n");
    }else if(vet[i] > 15){
      printf("ERRO MAIOR\n");
    }
  }

}

int main(){

  int vet[100];
  srand(time(NULL));
  num_aleatorio(vet);

  return 0;
}