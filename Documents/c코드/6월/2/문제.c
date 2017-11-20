#include <stdio.h>
int main(void) {
	char ch;

	FILE *data, *data1;
	data = fopen("data1.txt", "w");
	fputs("10306¹ÚÃ¤¿ø010-9459-4325",data);
	fclose(data);
	data1 = fopen("data1.txt", "r");

	for (int i = 5; i < 11; i++ ) {
		fseek(data1, i, SEEK_SET);
		ch = fgetc(data1);
		printf("%c", ch);
	}
	printf("\n");
	fclose(data1);
}