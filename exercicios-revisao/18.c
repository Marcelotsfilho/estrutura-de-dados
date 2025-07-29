/*
implemente uma função que receba uma string como parâmetro e retorno como resultado
o número de vogais nessa string. Essa função deve obedecer ao protótipo:
int conta_vogais(char *str);
*/
#include <stdio.h>
#include <string.h>

int count_vowels(char *str, int *count){
  for(int i = 0; str[i] != '\0'; i++){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
       str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){ //As letras maiusculas deverao ser consideradas
      (*count)++;
    }
  }
  return *count;
}

int main(){

    int count = 0;
    char str[100];
    fgets(str, 100, stdin); //Incado para char (melhor que scanf)
    printf("A quantidade de vogais e: %d \n", count_vowels(str, &count));

    return 0;
}