#include <Stdio.h>
#include <stdlib.h>
int main(void) {
	int *ip;
	double *dp;
	ip = (int*)malloc(sizeof(int));
	dp = (double*)malloc(sizeof(double));
	if (ip == 0 || dp == 0) printf("�޸𸮰� bujoke�մϴ�.\n");

	*ip = 30;
	*dp = 3.4;
	printf("���������� ��� : %d\n�Ǽ������� ��� : %lf\n", *ip, *dp);

}