#include <stdio.h>
#include <string.h>
int main(void) {
	char dictionary[2][20];
	int i, cmp;
	for (i = 0; i < 2; i++) 
		scanf("%s", &dictionary[i]);

	cmp = strcmp(dictionary[0], dictionary[1]);
	if (cmp > 0) printf("%s\n", dictionary[1]);
	else printf("%s\n", dictionary[0]);
	
}