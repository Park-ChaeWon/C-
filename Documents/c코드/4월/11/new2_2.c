#include <stdio.h>
int main(void) {
	int i = 1,total=0;
	do {
		if (i % 2 == 0) total += i;
		i++;
	} while (i<=100);
	printf("¦���� �� : %d \n", total);

}