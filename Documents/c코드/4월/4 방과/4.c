#include <stdio.h>
int main() {
	int a, b, c;
	int min = 0;
	printf("세 정수 입력 : "); scanf("%d %d %d", &a, &b, &c);
	if (a < b) {
		if (a < c) min=a;
		else min = c;
	}
	else  {
		if (b < c) min = b;
		else min = c;
	}
	printf("%d\n", min);
	
}