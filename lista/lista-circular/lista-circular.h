#ifndef LISTA_CIRCULAR_H
#define LISTA_CIRCULAR_H

struct celula{
  int conteudo;
  struct celula *prox;
};

typedef struct celula *celula_lista_ptr;

typedef struct{
  celula_lista_ptr inicio;
}Lista;

void iniciaLista(Lista *l);
int vazioLista(Lista *l);
void removeLista(Lista *l, int elemento);
void mostraLista(Lista *l);
void insereElemento(Lista *l, int elemento, int posicao);

#endif