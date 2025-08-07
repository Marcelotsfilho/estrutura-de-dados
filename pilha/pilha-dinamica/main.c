#include <stdio.h>
#include <stdlib.h>
#include "atleta.h"
#include "pilha_dinamica.h"

void inicializaAtleta(Atleta *a1);
void correr(Atleta *a1);
void descansar(Atleta *a1);
void printAtleta(Atleta *a1);

int main(){
  Pilha p;
  iniciaPilha(&p);
  Atleta a;
  int opcao;

  do {
    printf("\n--- MENU PILHA DE ATLETAS ---\n");
    printf("1 - Inserir atleta\n");
    printf("2 - Remover atleta do topo\n");
    printf("3 - Mostrar todos os atletas na pilha\n");
    printf("4 - Fazer atleta do topo correr\n");
    printf("5 - Fazer atleta do topo descansar\n"); 
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
      case 1:
        inicializaAtleta(&a);
        inserePilha(&p, a);
        printf("Atleta inserido com sucesso!\n");
        break;
      case 2: {
        Atleta atletaRemovido;
        if (removePilha(&p, &atletaRemovido)) {
          printf("Atleta removido do topo:\n");
          printAtleta(&atletaRemovido);
        }
        break;
      }
      case 3:
        mostraPilha(&p);
        break;
      case 4: {
        Atleta* atletaTopo = topoPilha(&p);
        if (atletaTopo != NULL) {
          correr(atletaTopo);
        } else {
          printf("A pilha esta vazia!\n");
        }
        break;
      }
      case 5: {
        Atleta* atletaTopo = topoPilha(&p);
        if (atletaTopo != NULL) {
          descansar(atletaTopo);
        } else {
          printf("A pilha esta vazia!\n");
        }
        break;
      }
      case 0:
        destroiPilha(&p); // Libera a memória antes de sair
        printf("Saindo...\n");
        break;
      default:
        printf("Opcao invalida!\n");
    }
  } while(opcao != 0);

  return 0;
}