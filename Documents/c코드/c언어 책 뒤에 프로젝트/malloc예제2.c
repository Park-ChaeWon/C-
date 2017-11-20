#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	int *ip;
	int i, sum = 0;
	ip = (int*)malloc(sizeof(int) * 5);
	if (ip == 0) {
		printf("메모리가 부족합니다.\n");
		return 1;
	}
	printf("다섯명의 나이를 입력하세요 : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &ip[i]);
		sum += ip[i];
	}
	printf("다섯명의 평균 나이 : %.1lf\n", sum / 5.0);
}