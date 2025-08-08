#include <stdlib.h>
#include <stdio.h>
#include "grafo.h"

Grafo* criar_grafo(int num_vertices) {
    // alocando a struct grafo
    Grafo* g = (Grafo*) malloc(sizeof(Grafo));
    if (g == NULL){
        return NULL;
    }
    g->num_vertices = num_vertices;
    g->matriz_adj = (int**) malloc(num_vertices * sizeof(int*));
    if (g->matriz_adj == NULL) {
        free(g);
        return NULL;
    }
    for (int i = 0; i < num_vertices; i++) {
        g->matriz_adj[i] = (int*) malloc(num_vertices * sizeof(int));
        if (g->matriz_adj[i] == NULL) {
            // em caso de falha, libera tudo que já foi alocado
            for (int k = 0; k < i; k++) free(g->matriz_adj[k]);
            free(g->matriz_adj);
            free(g);
            return NULL;
        }
        for (int j = 0; j < num_vertices; j++) {
            g->matriz_adj[i][j] = 0;
        }
    }
    return g;
}

void inserir_aresta(Grafo* g, int origem, int destino, int peso) {
    if (origem >= g->num_vertices || destino >= g->num_vertices || origem < 0 || destino < 0) {
        printf("Erro: Vértices inválidos (%d, %d).\n", origem, destino);
        return;
    }
    g->matriz_adj[origem][destino] = peso;
    g->matriz_adj[destino][origem] = peso; // Para grafos não direcionados
}

void remover_aresta(Grafo* g, int origem, int destino) {
    if (origem >= g->num_vertices || destino >= g->num_vertices || origem < 0 || destino < 0) {
        printf("Erro: Vértices inválidos (%d, %d).\n", origem, destino);
        return;
    }
    g->matriz_adj[origem][destino] = 0;
    g->matriz_adj[destino][origem] = 0;
}

int existe_aresta(Grafo* g, int origem, int destino) {
    if (origem >= g->num_vertices || destino >= g->num_vertices || origem < 0 || destino < 0) {
        return 0; 
    }
    return g->matriz_adj[origem][destino];
}

void exibir_grafo(Grafo* g) {
    printf("Matriz de Adjacência (Pesos):\n");
    for (int i = 0; i < g->num_vertices; i++) {
        for (int j = 0; j < g->num_vertices; j++) {
            printf("%d\t", g->matriz_adj[i][j]);
        }
        printf("\n");
    }
}

void liberar_grafo(Grafo* g) {
    if (g == NULL) return;

    // liberando cada linha
    for (int i = 0; i < g->num_vertices; i++) {
        free(g->matriz_adj[i]);
    }
    // liberando o array de ponteiros (as linhas)
    free(g->matriz_adj);
    // liberando a estrutura do grafo
    free(g);
}