#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    Lista *li = criaLista();

    struct aluno a1 = {1, "Joao", 7.5, 8.0, 6.5};
    struct aluno a2 = {2, "Maria", 9.0, 8.5, 7.0};
    struct aluno a3 = {3, "Pedro", 5.0, 6.0, 7.0};

    printf("Inserindo alunos 1, 2 e 3\n");
    insereFimLista(li, a1);
    insereFimLista(li, a2);
    insereFimLista(li, a3);
    mostraLista(li);
    printf("Tamanho da lista: %d\n", tamLista(li));
    
    printf("Removendo aluno do fim.\n");
    removeFimLista(li);
    mostraLista(li);
    
    printf("Removendo aluno do inicio.\n");
    removeInicioLista(li);
    mostraLista(li);

    printf("Tamanho da lista: %d\n", tamLista(li));
    printf("A lista esta cheia? %s\n", listaCheia(li) ? "Sim" : "Nao");
    printf("A lista esta vazia? %s\n", listaVazia(li) ? "Sim" : "Nao");

    liberaLista(li);

    return 0;
}