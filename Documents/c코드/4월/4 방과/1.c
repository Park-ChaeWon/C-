#include <stdio.h>
int main() {
	int a, b;
	printf("�� ���� �Է� : "); scanf("%d %d", &a, &b);
	if (a > b) printf("%d - %d = %d\n", a, b, a - b);
	else printf("%d - %d = %d\n", b, a, b - a);
}