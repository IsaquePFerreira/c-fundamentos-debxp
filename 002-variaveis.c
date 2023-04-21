#include <stdio.h>

#define NUMERO 20

int main(int argc, char *argv[]) {
	const int VALOR = 15;
	int a;
	
	a = 64;
	
	printf("Constante simbólica: %d\n", NUMERO); // ";" é obrigatório ao fim de uma instrução
	printf("Constante (read-only): %d\n", VALOR);
	printf("Variável: %d\n", a);
		
	return 0;
}

