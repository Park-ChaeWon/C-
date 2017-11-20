#include <stdio.h>
int main(void) {
	float rate[3] = { 0 };
	int score[3] = { 0 };
	int i;
	float sum = 0;
	printf("*******과목별 점수 계산 프로그램*******\n");
	for (i = 0; i < 3; i++) {
		if (i == 0) printf("중간고사 반영비율/받은 점수를 입력하세요 : ");
		if (i == 1) printf("기말고사 반영비율/받은 점수를 입력하세요 : ");
		if (i == 2) printf("수행평가 반영비율/받은 점수를 입력하세요 : ");
		scanf("%f %d", &rate[i], &score[i]);
	}
	for (i = 0; i < 3; i++)
		sum += rate[i] * score[i];

	printf("점수는 %.1f입니다.\n", sum);

}