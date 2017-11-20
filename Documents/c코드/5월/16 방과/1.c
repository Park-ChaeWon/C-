#include <stdio.h>
int main(void) {
	int num[10];
	int even_num[10] = { 0 };
	int odd_num[10] = { 0 };
	int max = 0, min = 0;
	int i = 0, j = 0, k = 0 ;

	for (i = 0; i < 10; i++)
		scanf("%d", &num[i]);
	
	for (i = 0; i < 10; i++) { //짝수 홀수 나누기
		if (num[i] % 2 == 0)
			even_num[j++] = num[i];

		else
			odd_num[k++] = num[i];
	}

	for (i = 0; i < j - 2; i++) { //가장 큰 짝수 구하기
		if (max < even_num[i]) max = even_num[i];
}
	
	for (i = 0; i < k - 2; i++) { //가장 작은 홀수 구하기
		if (min > odd_num[i]) min = odd_num[i];
	}
	printf("짝수 중 가장 큰 값 : %d\n", max);
	printf("홀수 중 가장 작은 값 : %d\n", min);

}