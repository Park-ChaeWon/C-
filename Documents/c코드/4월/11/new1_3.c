#include <stdio.h>
int main(void) {
	int count, i = 1, j=0;
	double total=0;
	printf("������ ���� �Է� : "); scanf("%d", &count);
	while (j < count) {
		scanf("%d", &i);
		total += i;
		j++;
	}
	total /= count;
	printf("%lf\n", total);
	


}