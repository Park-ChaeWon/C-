#include <Stdio.h>
int main(void) {
	char str[100];
	int i,len=0;
	char large;

	scanf("%s", str);
	while (str[len] != '\0') len++;

	large = str[0];

	for (i = 1; i < len; i++) {
		if (large < str[i]) large = str[i];
	}

	printf("아스키 코드 값이 가장 큰 문자 : %c \n", large);

}