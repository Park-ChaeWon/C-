#include <stdio.h>
int main() {
	int a, b, c;
	int max, mid, min;
	printf("세 정수 입력 : "); scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c) {
		max = a;
		if (b > c) {
			mid = b;
			min = c;
		}
		else {
			mid = c;
			min = c;
		}
	}
	else if (b > a && b > c) {
		max = b;
		if (a > c) {
			mid = a;
			min = c;
		}
		else {
			min = c;
			min = a;
		}
	}
	else {
		max = c;
		if (a > b) {
			mid = a;
			min = b;
		}
		else {
			mid = b;
			min = a;
		}
	}
	printf("%d %d %d\n", max, mid, min);
}