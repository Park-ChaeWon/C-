#include <stdio.h>
int main(void) {
	char data[50];
	FILE* fp = fopen("me.txt", "r");
	for (int i = 0; fgets(data, 50, fp) != NULL; i++) 
		puts(data);
	
	fclose(fp);
}