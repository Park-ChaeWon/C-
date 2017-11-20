#include <stdio.h>
int main(void) {
	int num=0,i;
	printf("양의 정수 입력 : ");
	scanf("%d",&num);
	for (i = 1; i <= num; i++) {
		if (num % i == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
}