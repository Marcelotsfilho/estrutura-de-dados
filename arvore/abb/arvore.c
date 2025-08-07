#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

No* novoNo(int valor){
  No* novo_no = (No*)malloc(sizeof(No));
  if (novo_no != NULL) {
    novo_no->conteudo = valor;
    novo_no->esquerda = NULL;
    novo_no->direita = NULL;
  }
  return novo_no;
}

void iniciaArvore(Arvore *arv){
  arv->raiz = NULL;
}

No* inserir_no_recursivo(No* raiz, int valor){
  if(raiz == NULL){
    return novoNo(valor);
  }
  if(valor < raiz->conteudo){
    raiz->esquerda = inserir_no_recursivo(raiz->esquerda, valor);
  }else if(valor > raiz->conteudo){
    raiz->direita = inserir_no_recursivo(raiz->direita, valor);
  }
  // Nota: valores duplicados são ignorados.
  return raiz;
}

void inserir_no(Arvore *arv, int valor){
  arv->raiz = inserir_no_recursivo(arv->raiz, valor);
}

// percurso em pre-ordem (raiz, esquerda, direita)
void mostraPreOrdemRecursivo(No* raiz){
  if(raiz == NULL){
    return;
  }
  printf("%d ", raiz->conteudo);
  mostraPreOrdemRecursivo(raiz->esquerda);
  mostraPreOrdemRecursivo(raiz->direita);
}

void mostraPreOrdem(Arvore arv){
    mostraPreOrdemRecursivo(arv.raiz);
    printf("\n");
}

// percurso em-ordem (esquerda, raiz, direita)
void mostraEmOrdemRecursivo(No* raiz){
  if(raiz == NULL){
    return;
  }
  mostraEmOrdemRecursivo(raiz->esquerda);
  printf("%d ", raiz->conteudo);
  mostraEmOrdemRecursivo(raiz->direita);
}

void mostraEmOrdem(Arvore arv){
    mostraEmOrdemRecursivo(arv.raiz);
    printf("\n");
}

// percurso em pos-ordem (esquerda, direita, raiz)
void mostraPosOrdemRecursivo(No* raiz){
  if(raiz == NULL){
    return;
  }
  mostraPosOrdemRecursivo(raiz->esquerda);
  mostraPosOrdemRecursivo(raiz->direita);
  printf("%d ", raiz->conteudo);
}

void mostraPosOrdem(Arvore arv){
    mostraPosOrdemRecursivo(arv.raiz);
    printf("\n");
}

void liberar_arvore_recursivo(No* raiz) {
    if (raiz == NULL) {
        return;
    }
    liberar_arvore_recursivo(raiz->esquerda);
    liberar_arvore_recursivo(raiz->direita);
    free(raiz);
}

void liberar_arvore(Arvore *arv) {
    liberar_arvore_recursivo(arv->raiz);
    arv->raiz = NULL;
}

No* buscar_recursivo(No* raiz, int valor) {
    if (raiz == NULL || raiz->conteudo == valor) {
        return raiz;
    }
    if (valor < raiz->conteudo) {
        return buscar_recursivo(raiz->esquerda, valor);
    }
    return buscar_recursivo(raiz->direita, valor);
}

No* buscar(Arvore arv, int valor) {
    return buscar_recursivo(arv.raiz, valor);
}

No* encontrar_minimo(No* no) {
    No* atual = no;
    while (atual && atual->esquerda != NULL) {
        atual = atual->esquerda;
    }
    return atual;
}

No* remover_no_recursivo(No* raiz, int valor) {
    if (raiz == NULL) {
        return raiz;
    }

    // navegacao ate no a ser removido
    if (valor < raiz->conteudo) {
        raiz->esquerda = remover_no_recursivo(raiz->esquerda, valor);
    } else if (valor > raiz->conteudo) {
        raiz->direita = remover_no_recursivo(raiz->direita, valor);
    } else { // Nó encontrado
        // Caso 1: Nó sem filhos ou com um filho
        if (raiz->esquerda == NULL) {
            No* temp = raiz->direita;
            free(raiz);
            return temp;
        } else if (raiz->direita == NULL) {
            No* temp = raiz->esquerda;
            free(raiz);
            return temp;
        }

        // caso 2: caso o no tenha dois filhos
        // pega o sucessor (menor valor na subárvore direita)
        No* temp = encontrar_minimo(raiz->direita);
        raiz->conteudo = temp->conteudo;
        raiz->direita = remover_no_recursivo(raiz->direita, temp->conteudo);
    }
    return raiz;
}

void remover_no(Arvore *arv, int valor) {
    arv->raiz = remover_no_recursivo(arv->raiz, valor);
}