#include <stdio.h>
int main(void) {
	int num=0,i=1;
	printf("정수 입력 : "); scanf("%d", &num);
	while (i<=num) {
		printf("%d ", 3 * i);
		i++;
	}
	printf("\n");
}