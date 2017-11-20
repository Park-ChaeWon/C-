#include <Stdio.h>
#include <stdlib.h>
int main(void) {
	int *ip;
	double *dp;
	ip = (int*)malloc(sizeof(int));
	dp = (double*)malloc(sizeof(double));
	if (ip == 0 || dp == 0) printf("메모리가 bujoke합니다.\n");

	*ip = 30;
	*dp = 3.4;
	printf("정수형으로 사용 : %d\n실수형으로 사용 : %lf\n", *ip, *dp);

}