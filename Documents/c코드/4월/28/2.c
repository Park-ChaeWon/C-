#include <stdio.h>
int main(void) {
	char talk[30];
	int i,count=0;
	printf("���� �Է��ϼ��� : "); gets(talk);
	for (i = 1; i <30 ; i++) {
		if (talk[i] == 0)
			break;
		else count++;
	}
	for (i = count; i >= 0; i--) printf("%c", talk[i]);
	printf("\n");

}