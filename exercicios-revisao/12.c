/*
Escreva uma função que receba um vetor de inteiros de tamanho n e retorne o maior
elemento presente no vetor. Implemente a função main para testar a função criada.
*/
#include <stdio.h>
#include <time.h>

int find_max(int vet[], int n){
    int max = vet[0];
    for(int i = 1; i < n; i++){
        if(vet[i] > max){
            max = vet[i];
        }
    }
    return max;
}

int main(){

    int n;
    scanf("%d", &n);
    int vet[n];
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        vet[i] = rand() % 100;
    }
    find_max(vet, n);

    return 0;
}