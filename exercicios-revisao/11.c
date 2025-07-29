/*
Escreva uma função que receba um número real n (passagem de parâmetros por valor) e
retorne a parte inteira e a fracionária por meio de passagem de parâmetros por referência.
Crie um programa para testar a função criada.
*/
#include <stdio.h>

void split_number(double n, double *whole_part, double *fractional_part){
    *whole_part = (int)n;
    *fractional_part = n - *whole_part;
}

int main(){

    double n, whole_part, fractional_part; 
    scanf("%lf", &n);
    split_number(n, &whole_part, &fractional_part);
    printf("Parte inteira e fracionaria de %.2lf: %.0lf e %.2lf\n", n, whole_part, fractional_part);

    return 0;
}