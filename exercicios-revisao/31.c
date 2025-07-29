/*
Desenvolver uma estrutura para representar um aluno contendo nome, idade, sexo e um
vetor com 4 notas. Inicie cada informação de um aluno e apresente-as conforme formato
abaixo:
Nome: ...
Idade: ...
Sexo: ...
Notas: n1 n2 n3 n4
No local de cada . . . deve aparecer a informação usada na inicialização. Da mesma forma,
no local de cada nota ni deverá aparecer a i-ésima nota do aluno
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
  char nome[30];
  int idade;
  char sexo;
  float notas[4];
}Aluno;

int main(){

  Aluno informacoes = {
    "Marcelo",
    23,
    'M',
    {1.0, 2.0, 3.0, 4.0}
  };

  printf("Nome: %s\n", informacoes.nome);
  printf("Idade: %d\n", informacoes.idade);
  printf("Sexo: %c\n", informacoes.sexo);
  printf("Notas: %.2f, %.2f, %.2f, %.2f \n", informacoes.notas[0], informacoes.notas[1], informacoes.notas[2], informacoes.notas[3]);

  return 0;
}