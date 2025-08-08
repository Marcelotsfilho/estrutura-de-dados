#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

void iniciaHeap(Heap *maxHeap){
  maxHeap->qtde = 0;
  maxHeap->capacidade = 10; // Capacidade inicial
  maxHeap->v = (int*)malloc(maxHeap->capacidade * sizeof(int));
  if (maxHeap->v == NULL) {
    printf("Erro ao alocar memoria para o Heap!\n");
    exit(1);
  }
}

void liberaHeap(Heap *maxHeap) {
    if (maxHeap->v != NULL) {
        free(maxHeap->v);
        maxHeap->v = NULL;
        maxHeap->qtde = 0;
        maxHeap->capacidade = 0;
    }
}

void mostraHeap(Heap maxHeap){
  if(maxHeap.qtde == 0){
    printf("O Heap esta vazio.\n");
  }else{
    printf("Heap: ");
    for(int i = 0; i < maxHeap.qtde; i++){
      printf("%d ", maxHeap.v[i]);
    }
  }
  printf("(Tamanho: %d, Capacidade: %d)\n", maxHeap.qtde, maxHeap.capacidade);
}

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insereHeap(Heap *maxHeap, int num){
  // Verifica se o heap está cheio e realoca memória se necessário
  if (maxHeap->qtde == maxHeap->capacidade) {
    maxHeap->capacidade *= 2; // Dobra a capacidade
    maxHeap->v = (int*)realloc(maxHeap->v, maxHeap->capacidade * sizeof(int));
    if (maxHeap->v == NULL) {
      printf("Erro ao realocar memoria para o Heap!\n");
      exit(1);
    }
  }

  int indiceFilho = maxHeap->qtde;
  maxHeap->v[indiceFilho] = num;
  maxHeap->qtde++;

  while (indiceFilho > 0 && maxHeap->v[indiceFilho] > maxHeap->v[(indiceFilho - 1) / 2]) {
    trocar(&maxHeap->v[indiceFilho], &maxHeap->v[(indiceFilho - 1) / 2]);
    indiceFilho = (indiceFilho - 1) / 2;
  }
}

void removeHeap(Heap *maxHeap){
  if (maxHeap->qtde == 0){
    printf("Nao e possivel remover: O Heap esta vazio.\n");
    return;
  }

  // Move o último elemento para a raiz para ser "peneirado"
  maxHeap->v[0] = maxHeap->v[maxHeap->qtde - 1];
  maxHeap->qtde--;

  int indicePai = 0;
  while (1) {
    int indiceFilhoEsq = 2 * indicePai + 1;
    int indiceFilhoDir = 2 * indicePai + 2;
    int indiceMaior = indicePai;

    if (indiceFilhoEsq < maxHeap->qtde && maxHeap->v[indiceFilhoEsq] > maxHeap->v[indiceMaior]) {
      indiceMaior = indiceFilhoEsq;
    }
    if (indiceFilhoDir < maxHeap->qtde && maxHeap->v[indiceFilhoDir] > maxHeap->v[indiceMaior]) {
      indiceMaior = indiceFilhoDir;
    }
    if (indiceMaior == indicePai) {
      break;
    }

    trocar(&maxHeap->v[indicePai], &maxHeap->v[indiceMaior]);
    indicePai = indiceMaior;
  }
}