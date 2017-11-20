#include <stdio.h>
void tmp(int* a, int *b) {
		int temp = *a;
		*a = *b;
		*b = temp;
}
int main(void) {
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b) tmp(&a, &b);
	if (b > c) tmp(&b, &c);
	if (a > c) tmp(&a, &c);


	printf("%d %d %d\n", a, b, c);
}