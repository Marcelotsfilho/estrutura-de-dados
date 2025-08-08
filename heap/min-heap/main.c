#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

int main(){

  Heap minHeap;

  printf("Iniciando o Heap...\n");
  iniciaHeap(&minHeap);
  mostraHeap(minHeap);

  printf("\n--- Inserindo elementos ---\n");
  insereHeap(&minHeap, 21);
  mostraHeap(minHeap);
  insereHeap(&minHeap, 15);
  mostraHeap(minHeap);
  insereHeap(&minHeap, 10);
  mostraHeap(minHeap);
  insereHeap(&minHeap, 9);
  mostraHeap(minHeap);
  insereHeap(&minHeap, 5);
  mostraHeap(minHeap);
  
  printf("\nInserindo o 3 (deve subir para a raiz)...\n");
  insereHeap(&minHeap, 3);
  mostraHeap(minHeap);

  printf("\n--- Removendo elementos (sempre o menor) ---\n");
  removeHeap(&minHeap);
  printf("Apos remocao: ");
  mostraHeap(minHeap);

  removeHeap(&minHeap);
  printf("Apos remocao: ");
  mostraHeap(minHeap);

  removeHeap(&minHeap);
  printf("Apos remocao: ");
  mostraHeap(minHeap);

  printf("\nEsvaziando o resto do Heap...\n");
  while(minHeap.qtde > 0) {
      removeHeap(&minHeap);
  }
  mostraHeap(minHeap);

  printf("\nTentando remover de um Heap vazio:\n");
  removeHeap(&minHeap);

  printf("\nLiberando a memoria do Heap...\n");
  liberaHeap(&minHeap);
  mostraHeap(minHeap);

  return 0;
}