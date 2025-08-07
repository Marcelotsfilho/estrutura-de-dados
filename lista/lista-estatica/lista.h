#ifndef LISTA_H
#define LISTA_H
#define MAX 100

struct aluno{
    int matricula;
    char nome[50];
    float nota1, nota2, nota3;
};
typedef struct lista Lista;

struct lista{
    int qtde;
    struct aluno dados[MAX];
};
Lista *li;

Lista* criaLista();
void liberaLista(Lista* li);
int tamLista(Lista* li);
int listaCheia(Lista* li);
int listaVazia(Lista* li);
int insereFimLista(Lista* li, struct aluno al);
int insereInicioLista(Lista* li, struct aluno al);
int insereMeioLista(Lista* li, struct aluno al);
int removeFimLista(Lista* li);
int removeInicioLista(Lista* li);
int removeMeioLista(Lista* li);
void mostraLista(Lista* li);

#endif