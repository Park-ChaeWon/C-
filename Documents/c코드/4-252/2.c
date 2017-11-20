#include <stdio.h>
int main(void) {
	int arr[2][3] = { 10,20,30,40,50,60 };
	printf("%d %d %d\n", sizeof(arr), sizeof(arr[0]), sizeof(&arr[0]));
}
