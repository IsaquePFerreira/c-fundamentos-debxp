#include <stdio.h>

int main() {
  int arr[5] = { 15, 25, 43, 64, 51};
  int *pa = arr;

  for (int i = 0; i < 5; i++) {
    printf(
        "pa + %d = %p -> *(pa + %d) = %d\n",
        i, pa + i, i, *(pa + i)
        );
  }
  return 0;
}
