#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	int *ip;
	int i, sum = 0;
	ip = (int*)malloc(sizeof(int) * 5);
	if (ip == 0) {
		printf("�޸𸮰� �����մϴ�.\n");
		return 1;
	}
	printf("�ټ����� ���̸� �Է��ϼ��� : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &ip[i]);
		sum += ip[i];
	}
	printf("�ټ����� ��� ���� : %.1lf\n", sum / 5.0);
}