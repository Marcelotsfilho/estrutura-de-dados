/*
Implemente uma função que receba uma string e substitua todas as letras por suas suces-
soras no alfabeto. Por exemplo, a string "Casa"seria alterada para "Dbtb". Essa função
deve obedecer ao protótipo:
void shift_string(char *str)
*/
#include <stdio.h>
#include <stdlib.h>

void shift_string(char *str){
  while(*str != '\0'){
    if(*str >= 'a' && *str < 'z'){
      *str = *str + 1;
    }
    if(*str >= 'A' && *str < 'Z'){
      *str = *str + 1;
    }
    if(*str == 'z'){
      *str = 'a';
    }else if(*str == 'Z'){
      *str = 'A';
    }
    *str++;
  }
}

int main(){

  char str[100];
  fgets(str, 100, stdin);

  shift_string(str);
  printf("A string modificada e: %s\n", str);

  return 0;
}