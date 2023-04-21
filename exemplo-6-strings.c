#include <stdio.h>

int main(void) {
  char fruta[] = "banana";
  char * carro = "fusca";

  int max, i;

  max = sizeof(fruta);
  printf("Número de caracteres em 'fruta': %d\n", max);

  for (i = 0; i < max; i++) {
    printf("Caractere %d -> '%c'\n", i, fruta[i]);
    // Também podemos utilizar a aritmética de ponteiros
    // printf("Caractere %d -> '%c'\n", i, *(fruta + i));
  }

  /*
     Não é possível encontrar o tamanho da string com
     o sizeof() se for atribuida a um ponteiro:

     max = sizeof(carro); -> 8 bytes (endereço)
     max = sizeof(*carro); -> 1 byte (primeiro caractere)
  */

  // Solução 1:
  //   Pegar o tamanho da string literal...

  //max = sizeof("fusca");

  // Solução 2:
  // Reinicia max com valor 1...
  max = 1;
  // Loop para calcular o tamanho da string no ponteiro...
  while (*carro != '\0') {
    max++;
    carro++;
  }
  // Reposiciona o ponteiro para o inicio da string...
  carro = carro - (max - 1);

  /* Solução 3:
     Utilizar a função strlen() do cabeçalho string.h
  */

  printf("\nNúmero de caracteres em 'carro': %d\n", max);

  for(i = 0; i < max; i++) {
    printf("Caractere %d -> '%c'\n", i, *(carro + i));
  }

  return 0;
}
