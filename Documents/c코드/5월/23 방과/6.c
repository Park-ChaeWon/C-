#include <stdio.h>
int main(void) {
	int a[3][3] = { 0 };
	int sum[3] = { 0 };
	int i, j;
	for (i = 0; i < 3; i++) {
		printf("%d번 학생 점수 : ", i + 1);
		for (j = 0; j < 3; j++)	
			scanf("%d", &a[i][j]);
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			sum[i] += a[i][j];
		}
	}
	printf("     국어   영어    수학    총점\n");
	for (i = 0; i < 3; i++)
		printf("%d번 %5d %5d %7d %7d\n", i + 1, a[i][0], a[i][1], a[i][2], sum[i]);

		

}