/*
Desenvolver uma função que calcule a soma de dois números passados por parâmetro e
utilize um terceiro parâmetro para retornar o resultado da soma. Segue uma sugestão de
protótipo da função: void soma(int a, int b, int *s);. Implemente a função main
para testar a função criada
*/
#include <stdio.h>

void sum(int a, int b, int *s){
    *s = a + b;
}

int main(){

    int a, b, s = 0;

    scanf("%d %d", &a, &b);
    sum(a, b, &s);
    printf("A soma de %d e %d e: %d", a, b, s);

    return 0;
}