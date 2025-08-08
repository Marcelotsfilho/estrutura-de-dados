#ifndef GRAFO_H
#define GRAFO_H

typedef struct {
    int num_vertices;
    int **matriz_adj; // alocacao dinamica (ponteiro x ponteiro)
} Grafo;

Grafo* criar_grafo(int num_vertices);
void inserir_aresta(Grafo* g, int origem, int destino, int peso);
void remover_aresta(Grafo* g, int origem, int destino);
int existe_aresta(Grafo* g, int origem, int destino);
void exibir_grafo(Grafo* g);
void liberar_grafo(Grafo* g);

#endif