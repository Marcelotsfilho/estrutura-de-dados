#ifndef HEAP_H
#define HEAP_H

struct Heap{
  int qtde;         // Quantidade atual de elementos
  int capacidade;   // Capacidade máxima atual do vetor
  int *v;           // Ponteiro para o vetor de elementos
};
typedef struct Heap Heap;

void iniciaHeap(Heap *maxHeap);
void mostraHeap(Heap maxHeap);
void insereHeap(Heap *maxHeap, int num);
void removeHeap(Heap *maxHeap);
void liberaHeap(Heap *maxHeap);

#endif