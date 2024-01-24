/* file_to_struct.c - file to struct */
/* made by Matthew Zlatniski */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef struct car_data_t {
	int year;
	int price;
	char brand[64];
	char model[64];
} Car;

Car g_data_arr[20];
int g_num_cars = 0;

/*-----------------------------------------------------------
 * reads data from a file and stores it in a global Car array
 *-----------------------------------------------------------
 */
int read_data(char * filename) {
	return 1;
}

/*----------------------------------------
 * prints all entries of a specified brand
 *----------------------------------------
 */
void filter_by_brand(char * brand) {
	return;
}

int main(int argc, char * argv[]) {
	if (argc != 2 && argc != 3) {
		printf("Invalid number of args.\n");
		printf("\nusage:\n\t./file_to_struct [filename] optional:[brand]\n");
		return -1;
	}

	read_data(argv[1]);

	if (argc == 3) {
		filter_by_brand(argv[2]);
	}
}
