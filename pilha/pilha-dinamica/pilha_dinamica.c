#include <stdio.h>
#include <stdlib.h>
#include "atleta.h"
#include "pilha_dinamica.h"

// A declaração de printAtleta é necessária aqui porque mostraPilha a utiliza.
void printAtleta(Atleta *a1);

void iniciaPilha(Pilha *p){
  p->topo = NULL;
}

void inserePilha(Pilha *p, Atleta a){
  celula_pilha_ptr novaCelula = (celula_pilha_ptr) malloc(sizeof(struct celula));
  if(novaCelula == NULL) {
      printf("Erro de alocacao de memoria!\n");
      exit(1); // Aborta o programa se não houver memória
  }
  novaCelula->atleta = a;
  novaCelula->ant = p->topo;
  p->topo = novaCelula;
}

void mostraPilha(Pilha *p){
  celula_pilha_ptr aux = p->topo;
  if(vazioPilha(p)){
    printf("A pilha esta vazia! \n");
  } else {
    printf("\n--- ATLETAS NA PILHA (TOPO PARA BASE) ---\n");
    while(aux != NULL){
      printAtleta(&(aux->atleta));
      aux = aux->ant;
    }
  }
}

int removePilha(Pilha *p, Atleta *atletaRemovido){
  if(vazioPilha(p)){
    printf("A pilha esta vazia! Impossivel remover.\n");
    return 0; // Retorna 0 para indicar falha
  } else {
    celula_pilha_ptr aux = p->topo;
    *atletaRemovido = aux->atleta;
    p->topo = aux->ant;
    free(aux);
    return 1; // Retorna 1 para indicar sucesso
  }
}

int vazioPilha(Pilha *p){
  return (p->topo == NULL);
}

Atleta* topoPilha(Pilha *p) {
    if (vazioPilha(p)) {
        return NULL;
    }
    return &(p->topo->atleta);
}

void destroiPilha(Pilha *p) {
  celula_pilha_ptr aux;
  while(p->topo != NULL){
    aux = p->topo;
    p->topo = p->topo->ant;
    free(aux);
  }
}