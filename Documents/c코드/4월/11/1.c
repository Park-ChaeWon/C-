#include <stdio.h>
int main() {
	int num, time, money=3000,count;
	printf("���� ź ����� �ο��� �ð�(�д���)�� �Է��ϼ��� : "); scanf("%d %d", &num, &time);
	if (time > 30) {
		count = (time - 30) / 10;
		count *= 500;
		money += count;
	}

	printf("��ü �ݾ��� %d���Դϴ�. \n", num*money);
}