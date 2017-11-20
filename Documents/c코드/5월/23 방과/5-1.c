#include <stdio.h>
int main(void) {
	int i, j,a=1;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < i + 1; j++) {
			printf("%2d ", a++);
		}
		printf("\n");
	}
}