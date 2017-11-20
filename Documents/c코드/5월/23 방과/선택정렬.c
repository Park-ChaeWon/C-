#include <Stdio.h>
int main(void) {
	int a[5] = { 20,50,30,10,40 };
	int i, j, min, tmp;

	for(i = 0; i < 4; i ++ ) {
		min = i;
		for (j = i + 1; j < 5; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
	}

	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}