#include <stdio.h>
int main(void) {
	int num[10] = { 0 };
	int sum1 = 0;
	int sum2 = 0;
	int i = 0, j = 0;

	for (i = 0; i < 10; i++)
		scanf("%d", &num[i]);

	for (i = 0; i < 10; i++) {
		if ((i + 1) % 2 == 0)
			sum1 += num[i];

		else sum2 += num[i];
	}
	printf("Ȧ�� ��° �� : %d\n¦�� ��° �� : %d\n", sum2, sum1);
}