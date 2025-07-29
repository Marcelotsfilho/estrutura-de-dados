#ifndef FILA_DINAMICA_H
#define FILA_DINAMICA_H

struct celula{
  int numero;
  struct celula *prox;
};

typedef struct celula *celula_fila_ptr;

typedef struct{
  celula_fila_ptr inicio;
}Fila;

void iniciaFila(Fila *f);
void insereFila(Fila *f, int num);
void removeFila(Fila *f);
int vazioFila(Fila f);
void mostraFila(Fila f);

#endif