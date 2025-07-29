/*
Escreva uma função que receba um vetor de tamanho n e retorne por referência o maior
elemento do vetor e o número de vezes que esse elemento ocorreu no vetor. Implemente a
função main para testar a função criada.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void max_count(int vet[], int n, int *max, int *count){
    *max = vet[0];
    *count = 1;
    for(int i = 1; i < n; i++){
        if(*max < vet[i]){
            *max = vet[i];
            *count = 1;
        }else if(vet[i] == *max){
            *count +=1;
        }
    }
    printf("O maior valor apareceu %d vezes e o valor e: %d\n", *count, *max);
}

void randon_numbers(int vet[], int n){
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        vet[i] = rand() % 10; 
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main(){

    int n, max, count;
    scanf("%d", &n);
    int vet[n];
    randon_numbers(vet, n);
    max_count(vet, n, &max, &count);

    return 0;
}