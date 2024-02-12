#include <stdio.h>

typedef union swapper_union {
	int x;
	char str[4];
} swapper;

void swapBytes(int * ptr) {
	swapper s = { 0 };
	s.x = *ptr;
	
}


