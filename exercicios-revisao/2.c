/*
Implemente uma função para calcular a soma dos primeiros 50 números naturais ímpares.
Considere o número 1 como primeiro número natural. Faça um programa para usar a
função e apresentar a soma para o usuário.
*/
#include <stdio.h>

int sum_impares(){
    int sum = 0;
    for(int i = 1; i <= 100; i++){
        if(i%2 !=0){
            sum += i;
        }
    }
    return sum;
}

int main(){

    int sum = sum_impares();
    printf("A soma dos primeiros 50 numeros naturais impares e: %d\n", sum);

    return 0;
}