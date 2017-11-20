#include <stdio.h>
int main() {
	int i = 0, j = 0,temp=0;
	int arr[3] = { 0 };
	for (i=0; i < 3; i++) {
		printf("정수 입력 : ");  scanf("%d", &arr[i]);
	}
	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		for (j = 0; j < sizeof(arr) / sizeof(int) - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}