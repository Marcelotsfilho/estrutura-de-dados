#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main(){

    Arvore arv;
    iniciaArvore(&arv);

    printf("Inserindo os valores: 14, 17, 11, 9, 53, 4, 41\n\n");
    inserir_no(&arv, 14);
    inserir_no(&arv, 17);
    inserir_no(&arv, 11);
    inserir_no(&arv, 9);
    inserir_no(&arv, 53);
    inserir_no(&arv, 4);
    inserir_no(&arv, 41);

    printf("Percurso em Pre-Ordem (Raiz, Esq, Dir): ");
    mostraPreOrdem(arv);
    printf("Percurso Em-Ordem (Esq, Raiz, Dir):   ");
    mostraEmOrdem(arv);
    printf("Percurso em Pos-Ordem (Esq, Dir, Raiz): ");
    mostraPosOrdem(arv);
    printf("\n");

    printf("Testando a busca:\n");
    int valor_busca = 41;
    if (buscar(arv, valor_busca) != NULL) {
        printf("O valor %d foi encontrado na arvore.\n", valor_busca);
    } else {
        printf("O valor %d NAO foi encontrado na arvore.\n", valor_busca);
    }
    valor_busca = 100;
     if (buscar(arv, valor_busca) != NULL) {
        printf("O valor %d foi encontrado na arvore.\n", valor_busca);
    } else {
        printf("O valor %d NAO foi encontrado na arvore.\n", valor_busca);
    }
    printf("\n");

    printf("Removendo o no com valor 11 (um filho)\n");
    remover_no(&arv, 11);
    printf("Percurso Em-Ordem apos remocao: ");
    mostraEmOrdem(arv);
    printf("\n");

    printf("Removendo o no com valor 17 (dois filhos)\n");
    remover_no(&arv, 17);
    printf("Percurso Em-Ordem apos remocao: ");
    mostraEmOrdem(arv);
    printf("\n");
    
    printf("Liberando toda a memoria da arvore...\n");
    liberar_arvore(&arv);
    printf("Percurso Em-Ordem apos liberacao completa: ");
    mostraEmOrdem(arv);


    return 0;
}