#ifndef ARVORE_H
#define ARVORE_H

struct No{
  int conteudo;
  struct No *esquerda, *direita;
};
typedef struct No No;

struct Arvore{
  struct No *raiz;
};
typedef struct Arvore Arvore;

void iniciaArvore(Arvore *arv);
void inserir_no(Arvore *arv, int valor);
void mostraPreOrdem(Arvore arv);
void mostraEmOrdem(Arvore arv);
void mostraPosOrdem(Arvore arv);
No* buscar(Arvore arv, int valor);
void remover_no(Arvore *arv, int valor);
void liberar_arvore(Arvore *arv);

#endif