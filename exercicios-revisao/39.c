/*
Implemente uma função recursiva para calcular o resultado do cálculo de um número a
elevado a um número natural b, ou seja, a^b
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcula_potencia(int a, int b){
    if(b == 0){
        return 1;
    }else{
        return a * calcula_potencia(a, b - 1);
    }
}

int main (){
  int a, b;
  scanf("%d %d", &a, &b);
  printf("O resultado de %d elevado a %d e: %d\n", a, b, calcula_potencia(a, b));
  return 0;
}