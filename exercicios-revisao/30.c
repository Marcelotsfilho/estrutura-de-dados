/*
Desenvolver uma estrutura para representar um quadrado no R2. Utilize o comando
typedef para oferecer um sinônimo (apelido) para a estrutura. Implemente uma função
para calcular a área do quadrado e outra para seu perímetro. Desenvolva um programa
para criar um quadrado, atribuir a ele valores e apresente na tela sua área e seu perímetro
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
  float lado;
}Quadrado;

void calculo_area(Quadrado medida){
  float area;
  area = (medida.lado*(2));
  printf("O valor da area do quadrado e: %.2f metros quadrados \n", area);
}
void calculo_perimetro(Quadrado medida){
  float perimetro;
  perimetro = (medida.lado*(4));
  printf("O valor do periemtro e: %.2f metros \n", perimetro);
}

int main(){
  Quadrado medida;

  printf("Digite o lado do quadrado\n");
  scanf("%f", &medida.lado);

  calculo_area(medida);
  calculo_perimetro(medida);

  return 0;
}