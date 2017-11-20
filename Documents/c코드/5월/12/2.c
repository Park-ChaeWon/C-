#include <stdio.h>
int G(int a, int b, int c) {
	int nMax;
	if (a > b) {
		if (a > c) nMax = a;
		else nMax = c;
	}
	else { //b>a
		if (b>c) nMax = b;
		else nMax = c;
	}
	return nMax;
}
int main(void) {
	int nR = 0;
	printf("MAX = %d\n", G(1, 2, 3));
	printf("MAX = %d\n", G(3, 1, 2));

}