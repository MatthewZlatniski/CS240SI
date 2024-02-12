#include <stdio.h>


void printADDress(int * x, int * y) {
	printf("&x: %p\n&y: %p\n", x, y);
	int temp = *x;
	*x = *y;
	*y = temp;	
}

int main(void) {
	int x = 4;
	int y = 5;

	/* write a function that can print the addresses that x and y are at */
	/* it should also swap their values */


	/* this should output the following */
	/*
	 * x = 5
	 * y = 4
	 */
	printf("x = %d\ny = %d\n", x, y);
}
