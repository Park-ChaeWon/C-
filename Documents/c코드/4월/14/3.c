#include <stdio.h>
// 저금한 금액과 누적금액 구하기
int main(void) {
	unsigned long long  i, won=10,sum=0;
	for (i = 1; i <= 31; i++) {
		sum += won;
		printf("%llu일차 : 저축금액 %llu원, 누적금액 %llu원 \n", i, won, sum);
		won*=2;
	}
}