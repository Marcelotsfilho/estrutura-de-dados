/*
Escreva uma função que receba um vetor de tamanho n e retorne por referência o maior
e o menor elementos do vetor do vetor. Implemente a função main para testar a função
criada.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void find_min_max(int vet[], int n, int *min, int *max){
    *min = vet[0];
    *max = vet[0];
    for(int i = 1; i < n; i++){
        if(vet[i] < *min){
            *min = vet[i];
        }if(vet[i] > *max){
            *max = vet[i];
        }
    }
}

void randon_numbers(int vet[], int n){
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        vet[i] = rand() % 100; 
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main(){

    int n, min, max;
    scanf("%d", &n);
    int vet[n];
    randon_numbers(vet, n);
    find_min_max(vet, n, &min, &max);
    printf("Min: %d, Max: %d\n", min, max);
    
    return 0;
}