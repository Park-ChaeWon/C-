#include <stdio.h>
int main() {
	int num1, num2;
	printf("�� ���� ���� ���� �Է� : "); scanf("%d %d", &num1, &num2);
	if (num1 < num2) {
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	for (int i = 1; i < num1; i++) {
		if (num1%i == 0 && num2%i == 0) printf("%d ", i);
	}
	printf("\n");
}