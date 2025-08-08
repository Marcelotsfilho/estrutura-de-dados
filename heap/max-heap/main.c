#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

int main(){

  Heap maxHeap;

  printf("Iniciando o Max Heap...\n");
  iniciaHeap(&maxHeap);
  mostraHeap(maxHeap);

  printf("\n--- Inserindo elementos ---\n");
  insereHeap(&maxHeap, 78);
  mostraHeap(maxHeap);
  insereHeap(&maxHeap, 66);
  mostraHeap(maxHeap);
  insereHeap(&maxHeap, 35);
  mostraHeap(maxHeap);
  insereHeap(&maxHeap, 29);
  mostraHeap(maxHeap);
  insereHeap(&maxHeap, 33);
  mostraHeap(maxHeap);
  insereHeap(&maxHeap, 21);
  mostraHeap(maxHeap);
  
  printf("\nInserindo o 99 (deve subir para a raiz)...\n");
  insereHeap(&maxHeap, 99);
  mostraHeap(maxHeap);

  printf("\n--- Removendo elementos (sempre o maior) ---\n");
  removeHeap(&maxHeap);
  printf("Apos remocao: ");
  mostraHeap(maxHeap);
  
  removeHeap(&maxHeap);
  printf("Apos remocao: ");
  mostraHeap(maxHeap);

  printf("\nEsvaziando o resto do Heap...\n");
  while(maxHeap.qtde > 0) {
      removeHeap(&maxHeap);
  }
  mostraHeap(maxHeap);

  printf("\nTentando remover de um Heap vazio:\n");
  removeHeap(&maxHeap);

  printf("\nLiberando a memoria do Heap...\n");
  liberaHeap(&maxHeap);
  mostraHeap(maxHeap);

  return 0;
}