#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int i;
	char* greet[3];
	char greeting[100];
	for (i = 0; i < 3; i++) {
		gets(greeting);
		greet[i] = (char*)malloc(strlen(greeting)+1);
		strcpy(greet[i], greeting);
	}
	printf("\n\n");
	for (i = 0; i < 3; i++)
		printf("%s\n", greet[i]);

	for (i = 0; i < 3; i++) free(greet[i]);
}
