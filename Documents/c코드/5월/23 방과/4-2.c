#include <stdio.h>
int main(void) {
	int a[5][5];
	int i, j, k=0;
	for (i = 0; i < 5; i++) {
		if (i % 2 == 0) {
			for (j = 0; j < 5; j++) {
				k++;
				a[i][j] = k;	
			}
		}
		
		else {
			for (j = 4; j >=0; j--) {
				k++;
				a[i][j] = k;
			}
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%5d ", a[i][j]);
		}
		printf("\n");
	}
}