/*
Crie um programa para imprimir 50 números pseudo-aleatórios no intervalo [0, 50]. Utilize
as funções rand() e srand() da biblioteca stdlib.h, além da função time() da biblioteca
time.h.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void num_aleatorio(int *vet){
  for(int i = 0; i < 50; i++){
    vet[i] = rand()%51;
    printf("%d ", vet[i]);
  }
}

int main(){
  int vet[50];
  srand(time(NULL));
  num_aleatorio(vet);

  return 0;
}