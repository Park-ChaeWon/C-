#include <stdio.h>
int main(void) {
	FILE *fp;
	char ch;
	long fpos;
	fp = fopen("data1.txt", "r");
	for (int i = 0; i < 5; i++) {
		ch = fgetc(fp);
		printf("%c", ch);
		fpos = ftell(fp);
		fseek(fp, -1, SEEK_END);
		ch = fgetc(fp);
		printf("%c", ch);
		fseek(fp, fpos, SEEK_SET);
	}
	
	printf("\n");
	fclose(fp);
}