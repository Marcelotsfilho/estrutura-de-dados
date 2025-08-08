#include <stdlib.h>
#include <stdio.h>
#include "grafo.h"

int main() {
    printf("Criando um grafo com 5 vertices...\n");
    Grafo* g = criar_grafo(5);
    if (g == NULL) {
        printf("Falha ao criar o grafo.\n");
        return 1;
    }

    printf("\nInserindo arestas ponderadas...\n");
    inserir_aresta(g, 0, 1, 10); // aresta entre 0 e 1 com peso 10
    inserir_aresta(g, 0, 4, 5);
    inserir_aresta(g, 1, 2, 3);
    inserir_aresta(g, 1, 3, 7);
    inserir_aresta(g, 1, 4, 2);

    exibir_grafo(g);

    printf("\nRemovendo a aresta entre 1 e 4...\n");
    remover_aresta(g, 1, 4);
    exibir_grafo(g);

    printf("\nVerificando a existencia da aresta (0,1): Peso = %d\n", existe_aresta(g, 0, 1));
    printf("Verificando a existencia da aresta (1,4): Peso = %d\n", existe_aresta(g, 1, 4));


    printf("\nLiberando a memoria do grafo...\n");
    liberar_grafo(g);
    printf("Grafo liberado com sucesso.\n");
    
    return 0;
}