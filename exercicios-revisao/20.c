/*
Implemente uma função que receba uma string e altere nela as ocorrências de caracteres
maiúsculos para minúsculos. Essa função deve obedecer ao protótipo:
void minusculo(char *str);
*/
#include <stdio.h>
#include <stdlib.h>

void minusculo(char *str){
  while (*str != '\0'){
    if(*str >= 'A' && *str <= 'Z'){
      *str = *str + ('a' - 'A');
    }
    *str++;
  }
}

int main(){

  char str[100];
  fgets(str, 100, stdin);
  minusculo(str);

  printf("A string convertida e: %s \n", str);
  return 0;
}