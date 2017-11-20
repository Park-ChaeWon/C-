#include <stdio.h>
int main() {
	int num = 0, total = 0;
	do {
		printf("정수 입력(0입력시 종료): "); scanf("%d", &num);
		total += num;
	} while (num != 0);
	printf("%d\n", total);
}