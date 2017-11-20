#include <Stdio.h>
int main(void) {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	int i = 0;

	for (i = 0; i < 10; i++) //바꾸기 전
		printf("%d ", arr[i]);
	putchar('\n');

	for (i = 0; i < 10; i++) {
		if (i == 0)
			arr2[9] = arr[0];

		else
			arr2[i - 1] = arr[i];
	}
	/*
	for(i=0;i<9;i++){
	b[i]=a[i+1]%10;
	}
	*/
	for (i = 0; i < 10; i++) //바꾼 후
		printf("%d ", arr2[i]);
	putchar('\n');

}