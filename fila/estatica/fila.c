#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void iniciaFila(Fila *fila){
  // Fila* fila = (Fila*) malloc(sizeof(Fila));
  fila->elemento[0] = 0;
  fila->fim = -1; //Inicialização da fila na posição -1(vaiza)
}

void incereElemento(Fila *fila, int *n){
  fila->fim++;
  fila->elemento[fila->fim] = *n;
}

void removeElemento(Fila *fila){
  if (fila->fim < 0) {
    printf("A fila está vazia, não é possível remover elemento.\n");
    return;
  }
  int removido = fila->elemento[0];
  for (int i = 0; i < fila->fim; i++) {
    fila->elemento[i] = fila->elemento[i+1];
  }
  fila->fim--;
  printf("O elemento %d foi removido com sucesso. \n", removido);
  printf("O tamanho da fila e: %d\n", fila->fim+1);
}

void verificaFila(Fila *fila){
  if(fila->fim == -1){
    printf("A fila está vazia! \n\n");
  }else{
    for(int i = 0; i <= fila->fim; i++){
      printf("%d ",fila->elemento[i]);
    }
    printf("\n");
  }
}

void liberaFila(Fila *fila){
  // Mostrar a fila antes de liberar
  printf("Fila antes de liberar: ");
  verificaFila(fila);
  // Remove todos os elementos
  while(fila->fim >= 0){
    removeElemento(fila);
  }
  printf("Fila liberada!\n");
}