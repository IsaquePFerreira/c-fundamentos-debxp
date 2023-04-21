#include <stdio.h>
#include <stdlib.h>

// F = (C * 1.8) + 32

int main(int argc, char *argv[]) {
  float celsius;

  sscanf(argv[1], "%f", &celsius);
  printf("%.2f\n", celsius * 1.8 + 32);

  return 0;
}


