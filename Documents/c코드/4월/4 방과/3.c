#include <stdio.h>
int main() {
	int a;
	printf("수 입력 : "); scanf("%d", &a);
	if (a % 3 == 0 && a % 5 == 0) printf("3의 배수이면서 5의 배수입니다.\n");
}