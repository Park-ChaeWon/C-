#include <stdio.h>
// ������ �ݾװ� �����ݾ� ���ϱ�
int main(void) {
	unsigned long long  i, won=10,sum=0;
	for (i = 1; i <= 31; i++) {
		sum += won;
		printf("%llu���� : ����ݾ� %llu��, �����ݾ� %llu�� \n", i, won, sum);
		won*=2;
	}
}