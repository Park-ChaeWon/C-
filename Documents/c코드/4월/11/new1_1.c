#include <stdio.h>
int main(void) {
	int num=0,i=1;
	printf("���� �Է� : "); scanf("%d", &num);
	while (i<=num) {
		printf("%d ", 3 * i);
		i++;
	}
	printf("\n");
}