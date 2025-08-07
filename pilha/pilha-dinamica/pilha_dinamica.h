#ifndef PILHA_DINAMICA_H
#define PILHA_DINAMICA_H
#include "atleta.h"

struct celula{
  Atleta atleta;
  struct celula *ant;
};

typedef struct celula *celula_pilha_ptr;

typedef struct{
  celula_pilha_ptr topo;
} Pilha;

void iniciaPilha(Pilha *p);
int vazioPilha(Pilha *p);
void inserePilha(Pilha *p, Atleta a);
void mostraPilha(Pilha *p);

int removePilha(Pilha *p, Atleta *atletaRemovido); 
void destroiPilha(Pilha *p);
Atleta* topoPilha(Pilha *p);

#endif