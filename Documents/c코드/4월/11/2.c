#include <stdio.h>
int main() {
	int num, hour, don, a;
	printf("���� ź ����� �ο��� �ð�(�д���)�� �Է��ϼ��� : "); scanf("%d %d", &num, &hour);
	a = (hour - 30) / 10;
	if (hour <= 30) don = 3000 * num;
	else don = (3000 + (500 * a))*num;
	printf("��ü �ݾ� : %d\n", don);
}