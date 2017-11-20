#include <stdio.h>
int main() {
	int nInput = 3, bResult = 0;
	bResult = nInput < 4 || nInput >= 60;
	printf("%d\n", bResult);
}