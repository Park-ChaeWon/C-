#include <stdio.h>
int main(void) {
	int h[10] = { 0 };
	int i, j;
	for (i = 0; i < 10; i++) scanf("%d", &h[i]);
	
	for (i = 0; i < 9; i++) {
		for (j = i; j < 10; j++) {
			if (h[i] < h[j]) {
				int tmp = h[i];
				h[i] = h[j];
				h[j] = tmp;
			}
		}
	}
	printf("%d\n", h[2]);;
}