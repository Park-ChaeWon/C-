#include <stdio.h>
int main() {
	int num;
	printf("���� �Է� : "); scanf("%d", &num);
	num = (num > 0) ? num : num*(-1);
	printf("%d\n", num);
}