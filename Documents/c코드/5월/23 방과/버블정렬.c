#include <Stdio.h>
int main(void) {
	int a[5] = { 20,50,30,10,40 };
	int i, j, tmp;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5-i; j++) {
			if (a[j] < a[j+1]) {
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < 5; i++)
		printf("%d ", a[i]);
	putchar('\n');
}