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

	printf("�ƽ�Ű �ڵ� ���� ���� ū ���� : %c \n", large);

}