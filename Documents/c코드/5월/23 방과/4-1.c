#include <Stdio.h>
int main(void) {
	int a[5][5];;
	int i, j,k=1;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			a[i][j] = k;
			k += 5;
		}
		k = 1;
		k+=(i+1);
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%5d ", a[i][j]);
		}
		printf("\n");
	}


}