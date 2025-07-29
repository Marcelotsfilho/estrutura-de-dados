/*
Implemente uma função recursiva para calcular e retornar a soma dos números naturais
menores ou iguais a N.
*/
#include <stdio.h>
#include <stdlib.h>

int calcula_soma(int n){
    if(n == 0){
        return 0;
    }
    else{
        return n + calcula_soma(n - 1);
    }
}

int main(){
    int n;
    printf("Digite o valor de n\n");  
    scanf("%d", &n);
    printf("A soma e: %d\n", calcula_soma(n));
    return 0;
}