#include <stdio.h>
#define WIDTH 5
#define HEIGHT 5
int main(void) {
	FILE *f1 = fopen("cvs_file.csv", "w");
	int i, j, n = 1;
	for (i = 1; i <= HEIGHT; i++) {
		for (j = 1; j <= WIDTH; j++) {
			fprintf(f1,"%d",n++);
			if (j != WIDTH) fprintf(f1, ",");
		}
		fprintf(f1, "\n");
	}
	return 0;
}