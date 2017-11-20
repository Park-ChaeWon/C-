#include <Stdio.h>
int main(void) {
	int a[] = { 1,5,7,9 };
	int b[] = { 2,4,8,10 };
	int c[8] = { 0 };
	int i, j,tmp;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 4; j++) {
			if (i < 5) c[j] = a[j];
			else c[j + 4] = b[j];
		}
	}
	for (i = 6; i > 0; i--) {
		for (j = 0; j < i + 1; j++) {
			if (c[j] > c[j + 1]) {
				tmp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = tmp;
			}
		}
	}     

	for (i=0; i < 8; i++) {
		printf("%d ", c[i]);
	}
	printf("\n");

}