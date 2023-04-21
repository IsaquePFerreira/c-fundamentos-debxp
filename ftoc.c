#include <stdio.h>
#include <stdlib.h>

// C = (F - 32) / 1.8

int main(int argc, char *argv[]) {
  float fahrenheit;

  sscanf(argv[1], "%f", &fahrenheit);
  printf("%.2f\n", (fahrenheit - 32 / 1.8));

  return 0;
}


