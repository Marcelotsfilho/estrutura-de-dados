/*
Crie um programa para imprimir 30 números pseudo-aleatórios no intervalo [0, 10]. Utilize
as funções rand() e srand() da biblioteca stdlib.h, além da função time() da biblioteca
time.h.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int num_aleatorio[30];
  srand(time(NULL));
  for(int i = 0; i < 30; i++){
    num_aleatorio[i] = rand()%11;
    printf("%d ", num_aleatorio[i]);
  }

  return 0;
}