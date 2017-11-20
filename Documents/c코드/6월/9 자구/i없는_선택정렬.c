#include <stdio.h>
//i 없음
int main(void) {
	int arr[] = { 5,9,10,3,7,2,12 };
	int min = 0;
	int n = sizeof(arr) / 4;

	for (; n > 0;n--) {
		if (arr[min] > arr[n-1])
			min = n-1;
	}

	printf("min : %d\n", arr[min]);

}
//다만 재활용 불가능