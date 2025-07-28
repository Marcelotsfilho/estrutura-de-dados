/*
Desenvolver um programa para efetuar o cálculo do valor de S, sendo S = 1−(1/2)+(1/3)−(1/4)+...
O número n de termos deverá ser solicitado ao usuário e o resultado da soma deverá ser
apresentado.
*/
#include <stdio.h>

float calculate_s(int n){
    double s = 0;
    for(int i = 1; i <= n; i++){
        if(i%2 != 0){
            printf("1/%d - ", i);
            s += 1/(double)i;
        }else{
            printf("1/%d + ", i);
            s -= 1/(double)i;
        }
    }
    printf("\n");
    return s;
}

int main(){

    int n;
    scanf("%d", &n);
    printf("O valor de S para os %d termos e: %.2f", n, calculate_s(n));

    return 0;
}