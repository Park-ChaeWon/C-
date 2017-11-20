#include <stdio.h>
int main(void) {
	char str[100];
	int lenth=0;
	
	scanf("%s", str);
	
	while (str[lenth] != '\0')
		lenth++;

	printf("문자열의 길이는 %d입니다.\n", lenth);

	for (int i = lenth-1; i >= 0; i--) {
		printf("%c", str[i]);
	}
	printf("\n");
	

}
