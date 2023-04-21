#include <stdio.h>
#include <stdlib.h>

#define KM 1.60934

int main(int argc, char *argv[]){
  float ml = atof(argv[1]);
  float km = ml * KM;

  printf("%f\n", km);

  return 0;
}
