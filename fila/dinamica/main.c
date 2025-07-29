#include <stdio.h>
#include <stdlib.h>
#include "fila-dinamica.h"

int main(){
    Fila f;
    iniciaFila(&f);
    int operacao = -1;
    while(operacao != 0){
        printf("*********************** \n");
        printf("   MENU DE OPERACOES \n");
        printf("*********************** \n");
        printf("1- Inserir elemento: \n");
        printf("2- Remover elemento: \n");
        printf("3- Mostrar fila: \n");
        printf("0- Sair: \n");
        printf("*********************** \n");
        scanf("%d", &operacao);
        if(operacao == 1){
            printf("*********************** \n");
            printf("   Inserir elemento \n");
            printf("*********************** \n");
            int n;
            printf("Digite o elemento a ser inserido: \n");
            scanf("%d", &n);
            incereFila(&f, n);
        }
        else if(operacao == 2){
            printf("*********************** \n");
            printf("   Remover elemento \n");
            printf("*********************** \n");
            removeFila(&f);
        }else if(operacao == 3){
            printf("*********************** \n");
            printf("   Mostrar fila \n");
            printf("*********************** \n");
            mostraFila(f);
        }
    }
    return 0;
}