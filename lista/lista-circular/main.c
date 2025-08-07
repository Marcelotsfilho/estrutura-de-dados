#include <stdio.h>
#include <stdlib.h>
#include "lista-circular.h"

int main(){

  Lista l;
  iniciaLista(&l);
  mostraLista(&l);

  insereElemento(&l, 1, 0);
  mostraLista(&l);
  removeLista(&l, 1);

  insereElemento(&l, 2, 1);
  insereElemento(&l, 3, 2);
  insereElemento(&l, 4, 3);
  mostraLista(&l);
  
  removeLista(&l, 2);
  mostraLista(&l);

  return 0;
}