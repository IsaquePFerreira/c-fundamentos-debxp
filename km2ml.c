#include <stdio.h>
#include <stdlib.h>

#define MILHA 0.6213

int main(int argc, char *argv[]) {
	float km = atof(argv[1]); // atof converte um array char para float
	float ml = km * MILHA;
	
	printf("%.2fkm = %2.f milhas\n", km, ml);
	
	return 0;
}
