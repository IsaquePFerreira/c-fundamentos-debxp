#include <stdio.h>

int main() {
  char c[] = { 'A', 'B', 'C' };
  char s[] = { 'D', 'E', 'F', '\0' };

  printf(
      "Array de caracteres: %s (%ld bytes)\n"
      "Strig              : %s (%ld bytes)\n\n",
      c, sizeof(c), s, sizeof(s)
      );

  return 0;
}
