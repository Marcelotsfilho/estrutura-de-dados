/*
Desenvolver um programa para cada padrão abaixo. Cada programa deve criar
o padrão utilizando uma única instrução para imprimir os asteriscos como, por exemplo,
printf("*");. Logo, estruturas de repetição precisarão ser utilizadas. Instruções como
printf("\n"); podem ser utilizadas para efetuar mudanças de linha.

 *****
 *****
 *****
 *****
 *****
 -------------------------
 *
 **
 ***
 ****
 *****
-------------------------
 *****
 ****
 ***
 **
*/
#include <stdio.h>

void print_rectangle(int tam){
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            printf("*");
        }
        printf("\n");
    }
}

void print_triangle(int tam){
    for(int i = 0; i < tam; i++){
        for(int j = 0; j <= i; j++){ //entender melhor sobre o <=
            printf("*");
        }
        printf("\n");
    }
}

void print_inverted_triangle(int tam){
    for(int i = 0; i < tam; i++){
        for(int j = tam; j > i; j--){
            printf("*");
        }
        printf("\n");
    }
}

int main(){

    int tam;
    scanf("%d", &tam);
    printf("\n");

    print_rectangle(tam);
    printf("\n");
    print_triangle(tam);
    printf("\n");
    print_inverted_triangle(tam);

    return 0;
}