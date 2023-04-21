#include <stdio.h>

int main(void) {
  // Um array com três linhas e 4 colunas...
  float turma[3][4] = {
    {10, 9.5, 5.5, 7.5 },
    {7, 8, 10, 8.5},
    {8.5, 6.5, 8, 10}
  };

  // Um array com 3 linhas e... 10 colunas?
  char aluno[3][10] = {
    "Maria",
    "Marcos",
    "Pedro"
  };

  puts("-------------------------------");
  puts("Alunos: Nota1 Nota2 Nota3 Nota4");
  puts("-------------------------------");

  // Percorrendo as linhas...
  for (int linha = 0; linha < 3; linha++) {
    printf("%-7s: ", aluno[linha]);
    // Percorrendo as colunas
    for (int coluna = 0; coluna < 4; coluna++) {
      printf("%5.2f ", turma[linha][coluna]);
    }
    puts("");
  }
  puts("-------------------------------");

  return 0;
}
