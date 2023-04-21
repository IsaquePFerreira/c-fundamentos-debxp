#include <stdio.h>

int main() {
  float valor[4];

  for (int i = 0; i < 7; i++) {
    valor[i] = i + 5;
    printf("Valor %d: R$ %5.2f - Índice %d\n",
        i + 1, valor[i], i
        );
  }

  /*valor[5] = 17.2;

  printf("\nNovo valor[5]: R$ %2.f\n", valor[5]);
  */
  return 0;
}
