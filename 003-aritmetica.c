#include <stdio.h>

int main(int argc, char *argv[]) {
	int a;
	int b;
	
	a = 30;
	b = 13;
	
	printf("Soma		: %5d\n", a + b);
	printf("Diferença	: %5d\n", a - b);
	printf("Produto		: %5d\n", a * b);
	printf("Quociente	: %5.2f\n", (float) a / b);
	printf("Resto		: %5d\n", a % b);
	
	return 0;
}
