#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* criaLista(){
    Lista *li = (Lista*)malloc(sizeof(Lista));
    if(li != NULL){
        li->qtde = 0;
    }
    return li;
}

void liberaLista(Lista* li){
    free(li);
}

int tamLista(Lista* li){
    if(li == NULL){
        return -1;
    }
    return li->qtde;
}

int listaCheia(Lista* li){
    if(li == NULL){
        return -1;
    }
    return (li->qtde == MAX);
}

int listaVazia(Lista* li){
    if(li == NULL){
        return -1;
    }
    return (li->qtde == 0);
}

int insereFimLista(Lista *li, struct aluno al){
    if(li == NULL || listaCheia(li)){
        return 0;
    }else{
        li->dados[li->qtde] = al;
        li->qtde++;
        return 1;
    }
}

int insereInicioLista(Lista* li, struct aluno al){
    if(li == NULL || listaCheia(li)){
        return 0;
    }else{
        for(int i = li->qtde-1; i > 0; i--){
            li->dados[i+1] = li->dados[i];
        }
        li->dados[0] = al;
        li->qtde++;
        return 1;
    }
}

int insereMeioLista(Lista* li, struct aluno al){
    if(li == NULL || listaCheia(li)){
        return 0;
    }else{
        int posicao;
        printf("Digite a posicao a ser inserida.\n");
        scanf("%d", &posicao);
        
        for(int i = li->qtde-1; i > posicao; i--){
            li->dados[i+1] = li->dados[i];
        }
        li->dados[posicao] = al;
        li->qtde++;
        return 1;
    }
}

int removeFimLista(Lista* li){
    if(li == NULL || listaVazia(li)){
        return 0;
    }else{
        li->qtde--;
        return 1;
    }
}

int removeInicioLista(Lista* li){
    if(li == NULL || listaVazia(li)){
        return 0;
    }else{
        for(int i = 0; i < li->qtde-1; i++){
            li->dados[i] = li->dados[i+1];
        }
        li->qtde--;
        return 1;
    }
}

int removeMeioLista(Lista *li){
    if(li == NULL || listaVazia(li)){
        return 0;
    }else{
        int posicao;
        printf("Digite a posicao a ser removida.\n");
        scanf("%d", &posicao);
        for(int i = posicao; i < li->qtde-1; i++){
            li->dados[i] = li->dados[i+1];
        }
        li->qtde--;
        return 1;
    }
}

void mostraLista(Lista* li){
    if(li == NULL){
        printf("Lista nao existe.\n");
    }else if(listaVazia(li)){
        printf("Lista vazia.\n");
    }else{
        for(int i = 0; i < li->qtde; i++){
            printf("Matricula: %d\n", li->dados[i].matricula);
            printf("Nome: %s\n", li->dados[i].nome);
            printf("Nota 1: %.2f\n", li->dados[i].nota1);
            printf("Nota 2: %.2f\n", li->dados[i].nota2);
            printf("Nota 3: %.2f\n", li->dados[i].nota3);
            printf("-----------------------\n");
        }
    }
}