#include <Stdio.h>
int main(void) {
	int arr[10] = { 0 };
	int arr2[10] = { 0 };
	int i = 0;

	for (i = 0; i < 10; i++) 
		scanf("%d", &arr[i]);
	
	for (i = 0; i < 10; i++) {
		if (i == 9)
			arr2[0] = arr[9];

		else
			arr2[i + 1] = arr[i];
	}
	for (i = 0; i < 10; i++) //�ٲ� ��
		printf("%d ", arr2[i]);
	putchar('\n');
}