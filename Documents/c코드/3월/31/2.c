#include<stdio.h>
int main() {
	int arr[10] = { 0 };
	int i=0;
	while (i<10) {
		scanf("%d", &arr[i]);
		i++;
	}
	i--;
	while (i >= 0) {
		printf("%d ", arr[i]);
		i--;
	}
	printf("\n");
}