/*
Desenvolver uma estrutura para representar um círculo no R2. Utilize o comando typedef
para oferecer um sinônimo (apelido) para a estrutura. Desenvolva um programa para criar
dois círculos, atribuir a eles valores para o par ordenado que representa o centro do círculo
e um valor para o raio. Apresente na tela os dados dos círculos usando o seguinte formato:
<(x, y) raio>. Apresente cada círculo em uma linha.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
  float x;
  float y;
  float raio;
}Circulo;

int main(){

   Circulo circulo1 = {1.0, 3.0, 5.0};
   Circulo circulo2 = {2.0, 5.0, 10.0};

   printf("<(%.1f, %.1f) %.1f>\n"), circulo1.x, circulo1.y, circulo1.raio;
   printf("<(%.1f, %.1f) %.1f>\n"), circulo2.x, circulo2.y, circulo2.raio;

  return 0;
}