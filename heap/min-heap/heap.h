#ifndef HEAP_H
#define HEAP_H

struct Heap{
  int qtde;         // Quantidade atual de elementos
  int capacidade;   // Capacidade máxima atual do vetor
  int *v;           // Ponteiro para o vetor de elementos (alocado dinamicamente)
};
typedef struct Heap Heap;

void iniciaHeap(Heap *minHeap);
void mostraHeap(Heap minHeap);
void insereHeap(Heap *minHeap, int num);
void removeHeap(Heap *minHeap);
void liberaHeap(Heap *minHeap);

#endif