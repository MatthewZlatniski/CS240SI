#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void readFile(char * filename) {
	FILE * fp = fopen(filename, "rb");
	assert(fp);

	fseek(fp, 0, SEEK_END);
	int size = ftell(fp);
	if (size == 0) {
		return;
	}

	float buffer[size/sizeof(float)];
	fseek(fp, 0, SEEK_SET);
	if (fread(buffer, sizeof(float), size/sizeof(float), fp) != size/sizeof(float)) {
		fclose(fp);
		fp = NULL;
		return;
	}

	fclose(fp);
	fp = NULL;

	for (int i = 0; i < size/sizeof(float); i++) {
		printf("%f\n", buffer[i]);
	}

	return;
	
}

int main(int argc, char * argv[]) {
	readFile(argv[1]);
}
