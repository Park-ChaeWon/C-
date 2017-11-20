#include <stdio.h>
int main(void) {
	FILE *fp;
	char ch;
	long fpos;
	fp = fopen("data1.txt", "r");

	for (int i = 0; i < 5; i++) {
		fseek(fp, i, SEEK_SET);
		ch = fgetc(fp);
		printf("%c", ch);
		fseek(fp, 5, SEEK_SET);
		ch = fgetc(fp);
		printf("%c", ch);
	}
	printf("\n");
	fclose(fp);
}