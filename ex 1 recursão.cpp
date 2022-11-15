#include <stdio.h>


int fatorial (int n) {
	if (n>1)
		return n * fatorial (n-1);
	else
		return 1;
}



int main () {
	
	int n, result;
	
	printf ("Digite um numero: ");
	scanf ("%d", &n);
	
	result = fatorial (n);
	
	printf ("\nO fatorial de %d e %d \n\n", n, result);
	
	return 0;
	
}
	