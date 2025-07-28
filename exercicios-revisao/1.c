/*
Crie uma função para calcular a soma dos primeiros 100 números naturais. Considere
o número 1 como primeiro número natural. Faça um programa para usar a função e
apresentar a soma para o usuário.
*/
#include <stdio.h>

int main(){
    int sum = 0;
    for(int i = 1; i <= 100; i++){
        sum += i;
    }
    printf("A soma dos primeiros 100 numeros naturais e: %d\n", sum);
    return 0;
}