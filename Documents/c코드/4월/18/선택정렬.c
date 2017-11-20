#include <Stdio.h>
int main(void){
	int arr[5] = { 0};
	int i,j, temp=0;
	printf("5개의 정수 입력 : ");
	for (i = 0; i < 5; i++) scanf("%d", &arr[i]); 

	for (i = 0; i <4; i++) {
		for (j = 4; j >0; j--) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}//end if
		} //end for(j)
	} //end for(i)

    for (i = 0; i < 5; i++) printf("%d ", arr[i]);
	printf("\n");

}