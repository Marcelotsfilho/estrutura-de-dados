/*
Crie um programa para imprimir 100 números pseudo-aleatórios no intervalo [5, 25]. Utilize
as funções rand() e srand() da biblioteca stdlib.h, além da função time() da biblioteca
time.h.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void num_aleatorio(int *vet){
  for(int i = 0; i < 100; i++){
    vet[i] = 5+rand()%21;
    printf("%d ", vet[i]);
    if(vet[i] > 25){
      printf("ERRO MAIOR\n");
    }else if(vet[i] < 5){
      printf("ERRO MENOR \n");
    }
  }
}

int main(){

  int vet[100];
  srand(time(NULL));
  num_aleatorio(vet);

  return 0;
}