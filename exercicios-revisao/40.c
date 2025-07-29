/*
Implemente uma função recursiva para calcular e retornar o produto dos números inteiros
maiores que 0 e menores ou iguais a N.
*/
#include <stdio.h>
#include <stdlib.h>

int calculo_produto(int n){
    if(n <= 1){
        return 1;
    }
    else{
        return n * calculo_produto(n - 1);
    }
}

int main(){

  int n;
  scanf("%d", &n);
  printf("O valor do produto e: %d", calculo_produto(n));

  return 0;
}