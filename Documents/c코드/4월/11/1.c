#include <stdio.h>
int main() {
	int num, time, money=3000,count;
	printf("말을 탄 사람의 인원과 시간(분단위)을 입력하세요 : "); scanf("%d %d", &num, &time);
	if (time > 30) {
		count = (time - 30) / 10;
		count *= 500;
		money += count;
	}

	printf("전체 금액은 %d원입니다. \n", num*money);
}