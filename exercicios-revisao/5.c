/*
Desenvolver um programa para efetuar o cálculo do valor de S utilizando os n primeiros
termos (n é informado pelo usuário), sendo S = 1 + 1/2 + 1/3 + 1/4 +... 
O resultado da soma deverá ser apresentado.
*/
#include <stdio.h>

double calculate_s(int n){
    double s = 0;
    for(int i = 1; i <= n; i++){
        s += (1/(double)i);
    }
    return s;
}

int main(){

    int n;
    scanf("%d", &n);
    printf("O valor de S para os %d primeiros termos e: %.2f\n", n, calculate_s(n));

    return 0;
}