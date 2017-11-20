#include <stdio.h>
#define swap(tmp,a,b) ((tmp)=(a),(a)=(b),(b)=(tmp))
int main(void) {
	int arr[] = { 5,9,10,3,7,2,12 };
	int min=0;
	int n = sizeof(arr) / 4;
	int i,tmp=0,j;

	for (j = 1; j < n - 1; j++) { //pass
		min = j - 1;
		for (i = j; i < n; i++) { //비교하는 라인
			if (arr[min] > arr[i])
				min = i;
		}
			printf("min is %d\n", arr[min]);
			swap(tmp, arr[min], arr[j-1]); //교환
			printf("%d PASS : ", j);
			for (i = 0; i < n; i++) printf("%2d ", arr[i]);
			
			printf("\n\n");
			
  }
}
