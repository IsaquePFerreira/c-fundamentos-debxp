/*
   Constante caractere
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
  char c = 78;
  char d = 'N';

  /*
  printf("O caractere '%c' tem valor %d\n", 'A', 'A');
  printf("O caractere '%c' tem valor %d\n", 77, 77);
  printf("O caractere '%c' tem valor %d\n", '9', '9');
  */

  puts("Espaço em memória...");

  printf("A variável c tem o caractere '%c' com valor %d: %lu bytes \n", c, c, sizeof(c));
  printf("A variável c tem o caractere '%c' com valor %d: %lu bytes \n", d, d, sizeof(d));
  printf(
  "\nMas a constante '%c' ocupa %lu bytes,\n"
  "exatamente como a constante %d: %lu bytes\n\n", 
  'N', sizeof('N'), 78, sizeof(78)
  );

  return 0;
}
