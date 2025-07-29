/*
Escreva uma função que receba um vetor de inteiros de tamanho n e um valor v. A função
deve retornar a quantidade de valores iguais a v existente no vetor. Crie um programa
para testar a função criada gerando números aleatórios para o vetor no intervalo [10, 100].
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void is_in_vector(int vet[], int n, int value){
    for(int i = 0; i < n; i++){
        if(vet[i] == value){
            printf("Value found\n");
        }
    }
    printf("Value not found\n");
}

void randon_numbers(int vet[], int n){
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        vet[i] = rand() % 91 + 10; // => 91 (valores de 0 a 90) + 10 para iniciar em 10
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main(){

    int n, value;
    scanf("%d %d", &n, &value);
    int vet[n];
    randon_numbers(vet, n);
    is_in_vector(vet, n, value);

    return 0;
}