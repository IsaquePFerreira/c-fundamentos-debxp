#include <stdio.h>

int a = 5;
int c = 45;

int faz_nada() {
  int c = 15;

  return c;
}

int main() {
  int b = 10;

  // printf("a: %d\nb: %d\n", a, b);
  printf("%d\n%d\n%d\n", a, b, faz_nada());

  return 0;
}
