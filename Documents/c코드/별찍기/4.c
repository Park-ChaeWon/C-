#include <stdio.h>
int main(void) {
	int a = 0, b = 0, c = 0;
	printf("세 수 입력 : "); scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c) printf("%d \n", a);
	else if (b > a && b > c) printf("%d \n", b);
	else printf("%d \n", c);

	return 0;
}