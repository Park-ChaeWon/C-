#include <stdio.h>
#include <string.h>
int main(void) {
	char alpha[100];
	int i;

	gets(alpha);

	for (i = 0; i < strlen(alpha); i++) {
		if (alpha[i] == '\n') break;
		else if (alpha[i] == 'a') alpha[i] = 'x';
		else if (alpha[i] == 'b') alpha[i] = 'y';
		else if (alpha[i] == 'c') alpha[i] = 'z';
		else if (alpha[i] == ' ') alpha[i] = ' ';
		else alpha[i] -= 3;
	}
	printf("%s\n", alpha);
}