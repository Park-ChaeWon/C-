#include <stdio.h>
int main(void) {
	int grade[100] = { 0 };
	int i, lenth, max = 0, min = 0;
	scanf("%d", &lenth);
	printf("점수를 입력하세요 (0 ~ 100): ");
	for (i = 0; i < lenth; i++)
		scanf("%d", &grade[i]);

	max = grade[0];
	min = grade[0];
	for (i = 1; i < lenth; i++) {
		if (max < grade[i]) max = grade[i];
		if (min > grade[i]) min = grade[i];
	}


	printf("일등은 %d점, 꼴등은 %d점\n",max,min);
}