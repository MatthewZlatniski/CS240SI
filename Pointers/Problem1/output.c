#include <stdio.h>

int main(void) {
	int arr[] = { 5, 3, 9, 2, 4, 1 };
	int * p = NULL;
	int i = 0;

	p = arr + 2;	
	p++;
	printf("%d\n", *(p++));
	*(--p) = 7;

	*p = (*p) + 1;
	p = arr;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d ", (*p)++);
		p++;
	}
	
	p--;
	printf("\n%d\n", *p);
	
}
