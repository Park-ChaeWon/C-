#include <stdio.h>
int main() {
	int num, hour, don, a;
	printf("말을 탄 사람의 인원과 시간(분단위)을 입력하세요 : "); scanf("%d %d", &num, &hour);
	a = (hour - 30) / 10;
	if (hour <= 30) don = 3000 * num;
	else don = (3000 + (500 * a))*num;
	printf("전체 금액 : %d\n", don);
}