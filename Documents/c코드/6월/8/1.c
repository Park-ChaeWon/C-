#include <Stdio.h>
int main(void) {
	char ch;
	FILE *fp, *fp1;
		fp= fopen("data.txt", "w");
	fputs("ILOVEYOU", fp);
	fclose(fp);

	fp1 = fopen("data.txt", "r");
	fseek(fp1, 1, SEEK_SET);
	for (int i = 1; i < 5; i++) {
		ch = fgetc(fp1);
		printf("%c", ch);
	}
	printf("\n");
	fclose(fp1);
}