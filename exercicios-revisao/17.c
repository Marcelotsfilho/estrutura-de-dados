/*
Desenvolver um programa para cada padrão abaixo. Cada programa deve criar o padrão
utilizando uma única instrução para imprimir os asteriscos como, por exemplo,
printf("*");. Logo, estruturas de repetição precisarão ser utilizadas. Instruções como
printf("\n"); podem ser utilizadas para efetuar mudanças de linha.

*           *
**         ***
***       *****
****     *******
*****   *********
*/
#include <stdio.h>

void triangle_rectangle(int n){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5 - i; j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}

void triangle_equilateral(int n){
        for(int i = 1; i <= n; i++) {
            for(int j = i; j < n; j++) {
            printf(" ");
        }
        for(int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    triangle_rectangle(n);
    printf("\n");
    triangle_equilateral(n);
    return 0;
}