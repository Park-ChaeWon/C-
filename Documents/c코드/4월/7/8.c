#include <stdio.h>
int main() {
	int t1, t2, t3, car = 170;
	printf("�� �ͳ��� ���� �Է� : ");
	scanf("%d %d %d", &t1, &t2, &t3);
	if (t1 > car && t2 > car && t3 > car) printf("�������\n");
	else {
		printf("�浹 ");
		if (t1 < car) printf("%d\n", t1);
		else if (t2 < car) printf("%d\n", t2);
		else printf("%d\n", t3);
	}
}