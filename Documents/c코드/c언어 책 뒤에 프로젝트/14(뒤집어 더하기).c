#include <stdio.h>
int f(int a) {
	int num = 0;
	while (a) {
		num *= 10;
		num = num + (a % 10);
		a /= 10;
	}
	return num;
}

int main(void) {
	int num = 0, num_r = 0;
	scanf("%d", &num);

	num_r = num + f(num);

	if (num_r == f(num_r)) printf("YES\n");
	else printf("NO\n");

	return 0;
}