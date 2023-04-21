#include <stdio.h>

int main() {
  int valor = 256;
  int *pvalor = &valor;

  printf("%d\n", valor);  // Imprime 10...
  printf("%d\n", *pvalor);  // Imprime 10...
  printf("%p\n", &valor);
  printf("%p\n", pvalor); // Imprime um endereço...

  return 0;
}
