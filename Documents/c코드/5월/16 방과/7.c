#include <Stdio.h>
int main(void) {
	int o[10] = { 0 };
	int num = 0;
	int i = 0;
	int j = 0;

	printf("10진수 입력 : ");
	scanf("%d", &num);

	for (i=0; num > 0; ) {
		o[i++] = num % 8;
		num /= 8;
	}

	for (j = i-1 ; j >=0; j--)
		printf("%d", o[j]);
	putchar('\n');

	// printf("8진수 : %o\n", num);
}