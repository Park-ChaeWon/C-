#include <stdio.h>
#include <string.h>
int main(void) {
	char str1[5][20];
	int i,index=0, max=0;
	for (i = 0; i < 5; i++) 
		scanf("%s", str1[i]);
	
	max = strlen(str1[0]);
	for (i = 1; i < 5; i++) 
		if (max < strlen(str1[i])) {
			max = strlen(str1[i]);
			index = i;
		}
	
	printf("%s\n", str1[index]);
	return 0;
}