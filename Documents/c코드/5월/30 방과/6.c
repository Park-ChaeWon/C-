#include <stdio.h>
int main(void) {
	char str[100];
	int i, j;
	int lenth = 0;
	char tmp;

	scanf("%s", str);
	
	while (str[lenth] != '\0') lenth++;

	for (i = 0; i < lenth; i++) {
		tmp = str[0];
		for (j = 1 ; j<lenth; j++) {
			str[j-1] = str[j];
	 	}
		str[lenth-1] = tmp;

		for (j = 0; j < lenth; j++) {
			printf("%c", str[j]);
		} printf("\n");
	
	}

}