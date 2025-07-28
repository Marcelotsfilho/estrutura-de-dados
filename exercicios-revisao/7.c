/*
Desenvolver um programa para efetuar o cálculo do valor de S, sendo S = 1+(2/3)+(3/5)+(4/7)+...
O número n de termos deverá ser solicitado ao usuário e o resultado da soma deverá ser
apresentado.
*/
#include <stdio.h>

double calculate_s(int n){
    double s = 1, den = 3;
    for(int i = 2; i <= n; i++){
        s += i/(double)den;
        den += 2;
    }
    return s;
}

int main(){

    int n;
    scanf("%d", &n);
    printf("O valor de S para os %d termos e: %.2f", n, calculate_s(n));

    return 0;
}