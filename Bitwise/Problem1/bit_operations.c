#include <stdio.h>

void printByte(char val);

/* set the nth bit in val to bit_val */
char setBit(char val, int n, int bit_val) {
	return val;
}

/* toggle the nth bit in val */
char toggleBit(char val, int n) {
	return val;
}

/* swap the bit values at n1 and n2 of val */
char swapBits(char val, int n1, int n2) {
	return val;
}

/* print the bits of val with most sig first */
void printByte(char val) {
}


int main(void) {

	printByte('A');
	printByte(setBit('A', 1, 1));
	printByte(toggleBit('A', 6));
	printByte(swapBits('A', 7, 6));

}
