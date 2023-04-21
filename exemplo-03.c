#include <stdio.h>

int main() {
  int arr[5] = { 1, 2, 3, 4, 5};
  int *pa = arr;

  for (int i = 0; i < 5; i++) {
    printf(
        "Valor em arr[%d] = %d -"
        "Endereço de arr[%d] = %p\n",
        i, *pa, i, pa
        );
    pa++;
  }
  return 0;
}
