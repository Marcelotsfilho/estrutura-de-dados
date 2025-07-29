/*
Implemente uma função que receba uma string e um caractere e retorne como resultado o
número de ocorrências desse caractere na string. Essa função deve obedecer ao protótipo:
int conta_char(char *str, char c);
*/
#include <stdio.h>
#include <stdlib.h>

int conta_char(char *str, char c){
    int cont = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == c){
            cont++;
        }
    }
    return cont;
}

int main(){
    char str[100], c;
    printf("Digite a mensagem: \n");
    fgets(str, 100, stdin);
    printf("Digite o caracter a ser comparado: \n");
    scanf(" %c", &c);
    int qtde_char = conta_char(str, c);
    printf("O caracter '%c' apareceu %d vezes\n", c, qtde_char);
    return 0;
}