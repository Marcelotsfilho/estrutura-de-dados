/*
Escreva uma função que receba um vetor de inteiros de tamanho n e preenche esse vetor
com valores aleatórios no intervalo [−15, 20]. Crie um programa para testar a função criada,
preenchendo o vetor e imprimindo seu conteúdo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randon_numbers(int vet[], int n){
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        vet[i] = rand() % 36 - 15; // => 36 (20 - (-15) + 1) onde +1 e para incluir o 0
        printf("%d ", vet[i]);
    }
}

int main(){

    int n;
    scanf("%d", &n);
    int vet[n];
    randon_numbers(vet, n);

    return 0;
}
