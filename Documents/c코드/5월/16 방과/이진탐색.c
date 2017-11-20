#include <Stdio.h>
int main(void) {
	int arr[] = { 11,18,26,27,39,57,63,75,76 };
	int num = 0;
	int right = 9, left = 0, mid = 0;
	

	printf("찾을 수 검색 : "); scanf("%d", &num);
	while (left <= right) {
		mid = (right + left) / 2;
		if (arr[mid] > num) right = mid - 1;
		else if (arr[mid] == num) break;
		else left = mid + 1;
	}
	printf("인덱스 번호 %d에 있습니다.\n", mid);
}