#include <Stdio.h>
int main() {
	int nInput;
INPUT:
	printf("Input number : "); scanf("%d", &nInput);

	if (nInput < 0 || nInput>10) goto INPUT;

	puts("End\n");

}
