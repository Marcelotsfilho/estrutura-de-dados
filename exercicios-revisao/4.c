/*
Desenvolver um programa para efetuar o cálculo do valor de S, sendo S = 1−2+3−4+...
O número n de termos deverá ser solicitado ao usuário e o resultado da soma deverá ser
apresentado.
*/
#include <stdio.h>

int calculate_s(int n){
    int s = 0;
    for(int i = 1; i <= n; i++){
        if(i%2 != 0){
            printf("+%d", i);
            s += i;
        }else{
            printf("-%d", i);
            s -= i;
        }
    }
    printf("\n");
    return s;
}

int main(){

    int n;
    scanf("%d", &n);
    printf("O valor de s para o n igual a %d e: %d\n", n, calculate_s(n));

    return 0;
}