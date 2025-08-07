#include <stdio.h>
#include <stdlib.h>
#include "lista-circular.h"

void iniciaLista(Lista *l){
  l->inicio = NULL;
}

int vazioLista(Lista *l){
  if(l->inicio == NULL){
    return 1;
  }else{
    return 0;
  }
}

void removeLista(Lista *l, int elemento){
  if(vazioLista(l)){
    printf("A lista esta vazia! \n");
    return;
  }else{
    celula_lista_ptr aux = l->inicio;
    celula_lista_ptr anterior = NULL;
    if(aux->conteudo == elemento){
      //caso o tenha somente um elemento na lista
      if(aux->prox == aux){ //ou seja, esteja apontando para p primeiro elemento da lista
        free(aux);
        l->inicio = NULL;
        printf("O elemento foi removido e a lista esta vazia. \n");
      }else{
        //caso o elemento seja o primeiro elemento da lista
        if(aux == l->inicio){
          while(anterior->prox != l->inicio){
            anterior = anterior->prox; //atualizo ate chegar no ultimo nó
          }
          anterior->prox = aux->prox; //atualizo o ultimo nó para o segundo nó
          l->inicio = aux->prox;
        }else{
          anterior->prox = aux->prox;
        }
        free(aux);
      }
      return;
    }
  }
}

void mostraLista(Lista *l){
  if(vazioLista(l)){
    printf("A lista esta vazia! \n");
  }else{
    celula_lista_ptr aux = l->inicio;
    printf("%d ", aux->conteudo);
    aux = aux->prox;
    while(aux != l->inicio){
      printf("%d ", aux->conteudo);
      aux=aux->prox;
    }
    printf("\n");
  }
}

void insereElemento(Lista *l, int elemento, int posicao){
  celula_lista_ptr nova_celula = (celula_lista_ptr)malloc(sizeof(struct celula));
  nova_celula->conteudo = elemento;
  if(vazioLista(l)){
    l->inicio = nova_celula;
    nova_celula->prox = nova_celula;
  }else{
    celula_lista_ptr aux = l->inicio;
    //caso insira no inicio da lista
    if(posicao == 0){
      while(aux->prox != l->inicio){
        aux = aux->prox;
      }
      aux->prox = nova_celula;
      nova_celula->prox = l->inicio;
      l->inicio = nova_celula;
    }else{
      //posicao - 1 para corrigir a posicao 0 
      for(int i = 0; i < posicao - 1 && aux->prox != l->inicio; i++){
        aux = aux->prox;
      }
      nova_celula->prox = aux->prox;
      aux->prox = nova_celula;
    }

  } 
}