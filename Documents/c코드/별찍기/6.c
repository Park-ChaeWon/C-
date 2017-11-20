#include <stdio.h>
int main(void) {
	int i = 0, j;

	if (i < 5) {
		for (i = 0; i < 5; i++) {
			for (j = 0; j <= i-1; j++) {
				printf(" ");
			}
			for (j = 9; j > i * 2; j--) {
				printf("*");
			}printf("\n");
		}
	}

	if (i >= 5) {
		for (i = 2; i < 6; i++) {
			for (j = 4; j >= i; j--) {
				printf(" ");
			}
			for (j = 1; j < i * 2; j++) {
				printf("*");
			}printf("\n");
		}
	}

	return 0;
}