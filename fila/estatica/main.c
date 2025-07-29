#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){

  Fila fila;
  iniciaFila(&fila);
  int operacao = -1;

  while(operacao != 0){
    printf("*********************** \n");
    printf("   MENU DE OPERACOES \n");
    printf("*********************** \n");
    printf("1- Incerir elemento: \n");
    printf("2- Romover elemnto: \n");
    printf("3- Verificar fila: \n");
    printf("4- Liberar fila: \n");
    printf("0- Sair: \n");
    printf("*********************** \n");
    scanf("%d", &operacao);
    if(operacao == 1){
      printf("*********************** \n");
      printf("   Incerir elemento \n");
      printf("*********************** \n");
      int n;
      printf("Digite o elemento a ser inserido: \n");
      scanf("%d", &n);
      incereElemento(&fila, &n);
    }
    else if(operacao == 2){
      printf("*********************** \n");
      printf("   Remove elemento \n");
      printf("*********************** \n");
      removeElemento(&fila);
    }else if(operacao == 3){
      printf("*********************** \n");
      printf("   Verifica fila \n");
      printf("*********************** \n");
      verificaFila(&fila); 
    }else if(operacao == 4){
      printf("*********************** \n");
      printf("    Libera fila \n");
      printf("*********************** \n");
      liberaFila(&fila);
    }
  }

  return 0;
}