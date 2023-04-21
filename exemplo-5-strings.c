#include <stdio.h>

int main(void) {
  char fruta[] = "banana";
  char *bicho = "zebra";
  char cor[5];
  char *carro;

  /* Lembre-se: nome de arrays não podem
     participar de atribuições!

     cor = "roxo"; ---> provoca erro!
  */

  cor[0] = 'r';
  cor[1] = 'o';
  cor[2] = 'x';
  cor[3] = 'o';
  cor[4] = '\0';

  // Mas ponteiros podem!
  carro = "fusca";

  printf(
      "fruta -> %s\nbicho -> %s\ncor -> %s\ncarro -> %s\n",
      fruta, bicho, cor, carro
      );
}
