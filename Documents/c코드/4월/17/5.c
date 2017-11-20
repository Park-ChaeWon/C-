#include <stdio.h>
int main() {
	int i, j;
	for (i = 1; i <= 8; i++) {
		if (i % 2 == 1) {
			for (j = 6; j >= i; j-=2) {
				printf(" ");
			}
			for (j =1 ; j < i * 2; j+=2) {
				printf("*");
			}
			printf("\n");
		}
		else printf("\n");
	}
}