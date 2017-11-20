#include <stdio.h>
int main(void) {
	//재민 코드
	/*
	int a = 0;
	int i = 31;
	printf("십진수 입력 : "); scanf("%d", &a);
	while (i >= 0) {
		printf("%d", (a >> i) & 1);
		i--;
	}
	*/
		//내 코드
	int num = 0, i = 0;	
	int arr[20] = { 0 };

	printf("십진수 양수 입력 : "); scanf("%d", &num);
	while (num > 0) {
		arr[i] = num % 2;
		num = num / 2;
		i++;
	}
	i = i - 1;
	while (i >= 0) {
		printf("%d ", arr[i]);
		i--;
	}
	printf("\n"); 
}
