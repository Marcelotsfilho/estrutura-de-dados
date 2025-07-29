/*
Escreva uma função denominada primo que recebe como parâmetro um inteiro m e dois
outros parâmetros primo_menor e primo_maior passados por referência. A função deve
retornar em primo_menor o maior número primo que é menor do que m e deve retornar
em primo_maior o menor número primo que é maior do que m. Crie um programa para
testar a função criada
*/
#include <stdio.h>

void search_prime_number(int m, int *primo_menor, int *primo_maior){
    int is_prime;
    for(int i = m - 1; i > 1; i--){
        is_prime = 1;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                is_prime = 0;
                break;
            }
        }
        if(is_prime){
            *primo_menor = i;
            break;
        }
    }
    for(int i = m + 1; ; i++){
        is_prime = 1;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                is_prime = 0;
                break;
            }
        }
        if(is_prime){
            *primo_maior = i;
            break;
        }
    }
}

int main(){

    int m, primo_menor, primo_maior;
    scanf("%d", &m);

    search_prime_number(m, &primo_menor, &primo_maior);
    printf("O maior primo menor que %d e: %d\n", m, primo_menor);
    printf("O menor primo maior que %d e: %d\n", m, primo_maior);

    return 0;
}