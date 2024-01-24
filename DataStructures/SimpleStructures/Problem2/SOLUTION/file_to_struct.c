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
	FILE * fp = fopen(filename, "r");
	assert(fp);

	int res;
	int year;
	int price;
	char brand[64];
	char model[64];
	for (int i = 0; (res = fscanf(fp, "%s | %s | %d | %d", brand, model, &year, &price)) != EOF; i++) {
		if (res != 4) {
			printf("Invalid File Format\n");
			return -1;
		}

		g_data_arr[i].year = year;
		g_data_arr[i].price = price;
		strcpy(g_data_arr[i].brand, brand);
		strcpy(g_data_arr[i].model, model);
		g_num_cars++;
	}

	fclose(fp);
	fp = NULL;

	return 0;
}

/*----------------------------------------
 * prints all entries of a specified brand
 *----------------------------------------
 */
void filter_by_brand(char * brand) {
	for (int i = 0; i < g_num_cars; i++) {
		if (!strcmp(g_data_arr[i].brand, brand)) {
			printf("%s | %s | %d | %d\n", g_data_arr[i].brand, g_data_arr[i].model, g_data_arr[i].year, g_data_arr[i].price);
		}
	}
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
