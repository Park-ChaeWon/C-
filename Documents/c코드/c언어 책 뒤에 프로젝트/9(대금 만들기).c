#include <stdio.h>
int main(void) {
	int len = 0;
	int i, count = 0;
	printf("�볪���� ���̸� �Է��ϼ��� : ");
	scanf("%d", &len);

	for (i = 1; i < len; i++) {
		if (len % i == 0) count++;
	}
	printf("%d\n", count);
}