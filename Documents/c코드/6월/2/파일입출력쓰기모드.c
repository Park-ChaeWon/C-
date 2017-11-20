#include <Stdio.h>
int main(void) {
	FILE* fp1 = fopen("out.txt", "w");
	fprintf(fp1, "%d\n", 9);
	fclose(fp1);
	return 0;
}