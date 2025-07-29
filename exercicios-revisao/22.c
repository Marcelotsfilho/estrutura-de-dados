/*
Implemente uma função que receba uma string como parâmetro e substitua as ocorrências
de uma letra pelo seu oposto no alfabeto, isto é, a ↔ z, b ↔ y, etc. Caracteres que não
forem letras devem permanecer inalterados. Essa função deve obedecer ao protótipo:
void string_oposta(char *str);
*/
#include <stdio.h>
#include <stdlib.h>

void string_oposta(char *str){
  while(*str != '\0'){
    if(*str >= 'a' && *str <= 'z'){
      *str = 'a' + 'z' - *str;
    }
    if(*str >= 'A' && *str <= 'Z'){
      *str = 'A' + 'Z' - *str ;
    }
    *str++;
  }
}

int main(){

  char str[100];
  fgets(str, 100, stdin);

  string_oposta(str);

  printf("A string modificada e: %s\n", str);

  return 0;
}