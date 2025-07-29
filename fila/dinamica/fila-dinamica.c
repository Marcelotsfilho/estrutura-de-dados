#include <stdio.h>
#include <stdlib.h>
#include "fila-dinamica.h"

void iniciaFila(Fila *f){
  f->inicio = NULL;
}
void insereFila(Fila *f, int num){
  //caso a fila esteja vazia 
  if(vazioFila(*f)){    
    celula_fila_ptr a1 = (celula_fila_ptr) malloc(sizeof(struct celula));
    a1->numero = num; //a primeira celula recebe o conteudo do elemento
    a1->prox = NULL; //atualiza o prox da celula incerida como NULL (ja que é a primeira celula incerida)
    f->inicio = a1; //atualiza o inicio da fila com o endereço de memoria da primeira celula
  }else{
    celula_fila_ptr a2 = (celula_fila_ptr) malloc(sizeof(struct celula));
    celula_fila_ptr aux = f->inicio; //iniciando a variavel aux como o inicio da fila
    while(aux->prox != NULL){
      //percorrendo a variavel aux até o final da fila
      aux = aux->prox;
    }
    a2->numero = num;
    a2->prox = NULL;
    aux->prox = a2; //faz com que o a celula anterior aponte para a celula incerida
  }
}
void removeFila(Fila *f){
  celula_fila_ptr aux = f->inicio; //salva os dados da primeira celula
  f->inicio = aux->prox; //apotando para o segundo elemento da fila
  free(aux); 
}
int vazioFila(Fila f){
  if(f.inicio == NULL){
    return 1;
  }else{
    return 0;
  }
}
void mostraFila(Fila f){
  if(vazioFila(f)){
    printf("A fila esta vazia \n");
    return;
  }
  celula_fila_ptr aux = f.inicio;
  while(aux->prox != NULL){
    printf("%d ", aux->numero);
    aux = aux->prox; // atualiza a celula
  }
  printf("%d \n", aux->numero); //printa o ultimo elemento
}