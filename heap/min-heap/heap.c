#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

void iniciaHeap(Heap *minHeap){
  minHeap->qtde = 0;
  minHeap->capacidade = 10; // Capacidade inicial
  minHeap->v = (int*)malloc(minHeap->capacidade * sizeof(int));
  if (minHeap->v == NULL) {
    printf("Erro ao alocar memoria para o Heap!\n");
    exit(1);
  }
}

void liberaHeap(Heap *minHeap) {
    if (minHeap->v != NULL) {
        free(minHeap->v);
        minHeap->v = NULL;
        minHeap->qtde = 0;
        minHeap->capacidade = 0;
    }
}

void mostraHeap(Heap minHeap){
  if(minHeap.qtde == 0){
    printf("O Heap esta vazio.\n");
  }else{
    printf("Heap: ");
    for(int i = 0; i < minHeap.qtde; i++){
      printf("%d ", minHeap.v[i]);
    }
  }
  printf("(Tamanho: %d, Capacidade: %d)\n", minHeap.qtde, minHeap.capacidade);
}

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insereHeap(Heap *minHeap, int num){
  // Verifica se o heap está cheio e realoca memória se necessário
  if (minHeap->qtde == minHeap->capacidade) {
    minHeap->capacidade *= 2;
    minHeap->v = (int*)realloc(minHeap->v, minHeap->capacidade * sizeof(int));
    if (minHeap->v == NULL) {
      printf("Erro ao realocar memoria para o Heap!\n");
      exit(1);
    }
  }

  // Insere o novo elemento na primeira posição livre
  int indiceFilho = minHeap->qtde;
  minHeap->v[indiceFilho] = num;
  minHeap->qtde++;

  // Lógica de "subir" o elemento (heapify-up) para manter a propriedade do Min Heap
  // A fórmula (indiceFilho - 1) / 2 calcula o índice do pai
  while (indiceFilho > 0 && minHeap->v[indiceFilho] < minHeap->v[(indiceFilho - 1) / 2]) {
    trocar(&minHeap->v[indiceFilho], &minHeap->v[(indiceFilho - 1) / 2]);
    indiceFilho = (indiceFilho - 1) / 2; // O filho agora está na posição do pai
  }
}

void removeHeap(Heap *minHeap){
  if (minHeap->qtde == 0){
    printf("Nao e possivel remover: O Heap esta vazio.\n");
    return;
  }

  // Move o último elemento para a raiz
  minHeap->v[0] = minHeap->v[minHeap->qtde - 1];
  minHeap->qtde--;

  int indicePai = 0;
  while (1) {
    int indiceFilhoEsq = 2 * indicePai + 1;
    int indiceFilhoDir = 2 * indicePai + 2;
    int indiceMenor = indicePai;

    if (indiceFilhoEsq < minHeap->qtde && minHeap->v[indiceFilhoEsq] < minHeap->v[indiceMenor]) {
      indiceMenor = indiceFilhoEsq;
    }

    if (indiceFilhoDir < minHeap->qtde && minHeap->v[indiceFilhoDir] < minHeap->v[indiceMenor]) {
      indiceMenor = indiceFilhoDir;
    }

    if (indiceMenor == indicePai) {
      break;
    }

    trocar(&minHeap->v[indicePai], &minHeap->v[indiceMenor]);
    indicePai = indiceMenor;
  }
}