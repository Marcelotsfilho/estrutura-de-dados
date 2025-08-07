#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para usar strcspn
#include "atleta.h"

void correr(Atleta *a1){
  if(a1->cansaco < 10){
    a1->cansaco += 1;
    printf("Corrida realizada! Cansaco atual: %d\n", a1->cansaco);
  } else {
    printf("Atleta esta exausto, descanse primeiro!\n");
  }
}

void descansar(Atleta *a1){
  if(a1->cansaco == 0){
    printf("O atleta nao esta cansado!\n");
  } else {
    a1->cansaco -= 1;
    printf("O atleta descansou! Cansaco atual: %d\n", a1->cansaco);
  }
}

void inicializaAtleta(Atleta *a1){
  // Limpa o buffer de entrada antes de ler o nome, caso um '\n' tenha sobrado de um scanf anterior
  int c;
  while ((c = getchar()) != '\n' && c != EOF);

  printf("Digite o nome do atleta: ");
  fgets(a1->nome, sizeof(a1->nome), stdin);
  a1->nome[strcspn(a1->nome, "\n")] = 0; // Remove o '\n' do final do nome

  printf("Digite o CPF do atleta: ");
  scanf("%d", &a1->cpf);

  printf("Digite a idade do atleta: ");
  scanf("%d", &a1->idade);

  printf("Digite o peso do atleta (kg): ");
  scanf("%f", &a1->peso);

  printf("Digite a altura do atleta (m): ");
  scanf("%f", &a1->altura);

  printf("O cansaco do atleta foi definido como 0.\n");
  a1->cansaco = 0;
}

void printAtleta(Atleta *a1){
  printf("----------------------------\n");
  printf("Nome: %s\n", a1->nome);
  printf("CPF: %d\n", a1->cpf);
  printf("Idade: %d\n", a1->idade);
  printf("Peso: %.2f kg\n", a1->peso);
  printf("Altura: %.2f m\n", a1->altura);
  printf("Nivel de Cansaco: %d/10\n", a1->cansaco);
  printf("----------------------------\n");
}