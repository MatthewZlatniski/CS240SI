#include <stdio.h>

void printByte(char val);

/* set the nth bit in val to bit_val */
char setBit(char val, int n, int bit_val) {
	if ((n < 0) || (n > 7)) {
		printf("invalid input\n");
		return val;
	}

	if (bit_val == 1) {
		val |= 1 << n;
	}
	else if (bit_val == 0) {
		val &= ~(n << 1);
	}
	else {
		printf("invalid input\n");
		return val;
	}

	return val;
}

/* toggle the nth bit in val */
char toggleBit(char val, int n) {
	if ((n < 0) || (n > 7)) {
		printf("invalid input\n");
  	return val;
  }

	val ^= (1 << n);
	return val;
}

/* swap the bit values at n1 and n2 of val */
char swapBits(char val, int n1, int n2) {
	if ((n1 < 0) || (n1 > 7) || (n2 < 0) || (n2 > 7)) {
    printf("invalid input\n");
    return val;
  }

	printByte(val);
	if (((val >> n1) & 1) != ((val >> n2) & 1)) {
		val ^= (1 << n1) | (1 << n2);
	}

	return val;
}

/* print the bits of val with most sig first */
void printByte(char val) {
	for (int i = 7; i >= 0; i--) {
		printf("%d", (val >> i) & 1);
	}

	printf("\n");

}


int main(void) {

	printByte('A');
	printByte(setBit('A', 1, 1));
	printByte(toggleBit('A', 6));
	printByte(swapBits('A', 7, 6));

}
