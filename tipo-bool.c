/*
   Tipo Booleano
 */
#include <stdio.h>
#include <stdbool.h>

int main() {
  _Bool a = 123;
  _Bool b = 0;

  printf("Tamanho do tipo '_Bool': %lu\n\n", sizeof(_Bool));

  printf("O valor de 'a' é: %d (%lu bytes)\n", a, sizeof(a));
  printf("O valor de 'b' é: %d (%lu bytes)\n\n", b, sizeof(b));

  printf("Tamanho de 'true': %lu\n", sizeof(true));
  printf("Tamanho de 'false': %lu\n", sizeof(false));


  return 0;
}
