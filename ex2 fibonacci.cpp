#include <stdio.h>



int x=1, y=1, z;

int fibonacci (int x, int y) {
	if (y<10000) {
		z = x + y;
		printf (" %d ", z);
		return fibonacci (y, z);
	}
}



int main () {
	
	printf ("%d  %d ", x, y);
	
	fibonacci (x, y);
	
	return 0;
}
	