#include <Stdio.h>
int main(void) {
	FILE *fp, *fp1;
	fp= fopen("text.txt", "w");
	fputs("123456789", fp);
	fclose(fp);
	fp1 = fopen("text.txt", "r");
	printf("%ld\n",ftell(fp1));
	fseek(fp, -2, SEEK_END);
	printf("%ld\n", ftell(fp1));
	fclose(fp);
}