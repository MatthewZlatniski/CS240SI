/* info_collector.c - info collector */
/* by Matthew Zlatniski */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void collect_info() {
	FILE * fp = fopen("database.txt", "a");
	assert(fp);

	char name[64];
	char color[64];
	int fav_num;

	printf("Enter your name: ");
	scanf("%s", name);

	printf("Enter your favorite color: ");
	scanf("%s", color);
	
	printf("Enter your favorite number: ");
	scanf("%d", &fav_num);

	fprintf(fp, "%s, %s, %d\n", name, color, fav_num);

	fclose(fp);
	fp = NULL;
}

int main(void) {
	collect_info();
	return 0;
}
