/*
Implemente uma função para calcular a área de um círculo, definido conforme a especifi-
cação do exercício 31
*/
#include <stdio.h>
#include <stdlib.h>

float area_circulo(float *raio){
  float area_calculada = 0;
  area_calculada = 2*(*raio)*3.14;

  return area_calculada;
}

int main(){
  float raio;
  scanf("%f", &raio);

  printf("A area do circulo e: %.2f\n", area_circulo(&raio));
  return 0;
}