#include <Stdio.h>
int main(void) {
	int num1, num2,total=0;
	printf("�ΰ��� ���� �Է�(��, ���� ������ �� ũ��) : "); scanf("%d %d", &num1, &num2);
	for (int i = num1; num1 <= num2; num1++) total += num1;
	printf("%d\n", total);
}