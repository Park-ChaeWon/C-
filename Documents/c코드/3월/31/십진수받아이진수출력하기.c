#include <stdio.h>
int main(void) {
	//��� �ڵ�
	/*
	int a = 0;
	int i = 31;
	printf("������ �Է� : "); scanf("%d", &a);
	while (i >= 0) {
		printf("%d", (a >> i) & 1);
		i--;
	}
	*/
		//�� �ڵ�
	int num = 0, i = 0;	
	int arr[20] = { 0 };

	printf("������ ��� �Է� : "); scanf("%d", &num);
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
