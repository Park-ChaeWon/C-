#include <stdio.h>
int main(void) {
	int h = 0, l = 0;
	int i,j;

	printf("������ ���̿� ������ ���̸� �Է��ϼ��� : \n");
	scanf("%d %d", &l, &h);

	printf("+");
	for (i = 1; i < l-1; i++) printf("-");
	printf("+");
	printf("\n");
	h -= 2;
	for (j = 0; j < h; j++) {
			printf("|");
			for (i = 0; i < l - 2; i++) printf(" ");
			printf("|");
			printf("\n");
	}

	printf("+");
	for (i = 1; i < l - 1; i++) printf("-");
	printf("+");
	printf("\n");
}