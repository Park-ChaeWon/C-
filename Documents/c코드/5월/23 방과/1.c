#include <Stdio.h>
int main(void) {
	int a[5] = { 90,70,80,100,50 };
	int i, j, tmp;
	for (i = 3; i >0; i--) {
		for (j = 0; j<i+1 ; j++) {
			if (a[j] > a[j + 1]) {
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\n");

}