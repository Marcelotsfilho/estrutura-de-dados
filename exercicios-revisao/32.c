/*
Implemente uma função para calcular a média das notas de um aluno. Desenvolva um
programa para criar um aluno. Solicite ao usuário os dados do aluno e suas notas no
intervalo [1, 10]. Calcule a média usando a função criada e mostre-a na tela.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
  char nome[30];
  int idade;
  char sexo;
  char curso[30];
  float notas[4];
}Aluno;

int main(){

  Aluno aluno1;
  printf("Digite o nome: \n");
  scanf("%s", aluno1.nome);
  printf("Digite a idade: \n");
  scanf("%d", &aluno1.idade);
  printf("Digite o primeiro caracter do sexo: \n");
  scanf(" %c", &aluno1.sexo);
  printf("Digite o curso: \n");
  scanf("%s", &aluno1.curso);
  printf("Digite as notas no intervalo de 1 a 10: \n");
  scanf("%f %f %f %f", &aluno1.notas[0], &aluno1.notas[1], &aluno1.notas[2], &aluno1.notas[3]);

  printf("O nome e: %s \n", aluno1.nome);
  printf("A idade e: %d \n", aluno1.idade);
  printf("O sexo e: %c \n", aluno1.sexo);
  printf("O curso e: %s \n", aluno1.curso);
  printf("As notas sao: %.2f, %.2f, %.2f, %.2f \n", aluno1.notas[0], aluno1.notas[1], aluno1.notas[2], aluno1.notas[3]);


  return 0;
}