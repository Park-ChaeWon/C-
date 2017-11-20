#include <stdio.h>
int main(void) {
	int num[10] = { 0 };
	int i, even_num_max =0, odd_num_max = 0;
	printf("10개의 자연수를 입력하세요 : ");
	for (i = 0; i < 10; i++)
		scanf("%d", &num[i]);

	for (i = 0; i < 10; i++) {
		if ((num[i] % 2) == 0) {
			if (even_num_max < num[i]) even_num_max = num[i];
		}
		else {
			if (odd_num_max < num[i]) odd_num_max = num[i];
		}
	}
	if (odd_num_max == 0) printf("%d\n", even_num_max);
	else if (even_num_max == 0) printf("%d\n", odd_num_max);
	else printf("%d %d\n", odd_num_max, even_num_max);
}