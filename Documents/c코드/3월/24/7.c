#include<stdio.h>
int main() {
	int a = 0, b = 0;
	printf("두 정수를 입력하세요 : "); scanf("%d %d", &a, &b);
	printf("%d + %d = %d \n", a, b, a + b);
	printf("%d - %d = %d \n", a, b, a - b);
	printf("%d * %d = %d \n", a, b, a*b);
	printf("%d / %d = %d \n", a, b, a / b);
	printf("%d %% %d = %d \n", a, b, a%b);
}