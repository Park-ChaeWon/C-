#include <stdio.h>
int main() {
	int num = 0, total = 0;
	do {
		printf("���� �Է�(0�Է½� ����): "); scanf("%d", &num);
		total += num;
	} while (num != 0);
	printf("%d\n", total);
}