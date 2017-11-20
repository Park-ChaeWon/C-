#include <stdio.h>
#include <limits.h>
#define swap(tmp,a,b) ((tmp)=(a),(a)=(b),(b)=(tmp))

void Selectionsort(int arr[], int n);

int main(void) {
	int arr[10000] = { 0 };	
	int input, i=0;
	while (1) {
		scanf("%d", &input);
		if (input == 9999) {
			Selectionsort(arr, i);
			return 0;
		}
		arr[i++] = input;
	}
}

void Selectionsort(int arr[], int n) {
	int min = 0;
	int i, tmp = 0, j;
	int t;

	printf("\n 정렬할 배열 : ");
	for (t = 0; t < n; t++) printf("%2d ", arr[t]);
	printf("\n\n");

	for (j = 1; j < n - 1; j++) { //pass
		min = j - 1;

		for (i = j; i < n; i++) { //비교하는 라인
			if (arr[min] > arr[i])
				min = i;
		}
		printf("min is %d\n", arr[min]);
		swap(tmp, arr[min], arr[j - 1]); //교환
		printf("%d PASS : ", j);
		for (i = 0; i < n; i++) printf("%2d ", arr[i]);

		printf("\n\n");

	}
}