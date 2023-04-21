#include <stdio.h>
#include <stdlib.h>

/*
   C = (F - 32) / 1.8
   F = (C * 1.8) + 32
   K = C + 273.15
*/

// Protótipo das funções
float ctf_conv(float);          // Converte °C -> °F
float ctk_conv(float);          // Converte °C -> K
float ftc_conv(float);          // Converte °F -> °C
void cfk_table(int, int, int);  // Tabela °C -> °F -> K
void fck_table(int, int, int);  // Tabela °F -> °C -> K
void usage(char *);             // Erro e ajuda

// Exibe erro e ajuda se nada for passado como argumento
void usage(char *program) {
  puts("Parameters missing!\n\nUsage:");
  printf("%s c|f <min> <max> <step>\n", program);
  exit(1);
}
// Converte °C -> °F
float ctf_conv(float celsius) {
  return (celsius * 1.8) + 32;
}

// Converte °C -> K
float ctk_conv(float celsius) {
  return celsius + 273.15;
}

// Converte °F -> °C
float ftc_conv(float fahrenheit) {
  return (fahrenheit - 32) / 1.8;
}

// Imprime Tabela °C -> °F -> K
void cfk_table(int min, int max, int step) {
  printf("\n(°C)  (°F)  (K)\n");
  while(min <= max) {
    printf("%4d %6.2f %6.2f\n", min, ctf_conv(min), ctk_conv(min));
    min = min + step;
  }
  puts("");
}

// Imprime Tabela °F -> °C -> K
void fck_table(int min, int max, int step) {
  float c;
  printf("\n(°F)  (°C)  (K)\n");
  while (min <= max) {
    c = ftc_conv(min);
    printf("%4d %6.2f %6.2f\n", min, c, ctk_conv(c));
    min = min + step;
  }
  puts("");
}

int main(int argc, char *argv[]) {
  int min, max, step;

  // Se houver menos parâmetros do que o esperado, sai e mostra a ajuda
  if (argc < 5) usage(argv[0]);
  // sscanf(string, formato, &var);
  sscanf(argv[2], "%d", &min);
  sscanf(argv[3], "%d", &max);
  sscanf(argv[4], "%d", &step);

  // Tabela °C -> °F -> K
  if (*argv[1] == 'c') cfk_table(min, max, step);
  // Tabela °F -> °C -> K
  if (*argv[1] == 'f') fck_table(min, max, step);

  return 0;
}
