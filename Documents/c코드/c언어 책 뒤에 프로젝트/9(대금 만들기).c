#include <stdio.h>
int main(void) {
	int len = 0;
	int i, count = 0;
	printf("대나무의 길이를 입력하세요 : ");
	scanf("%d", &len);

	for (i = 1; i < len; i++) {
		if (len % i == 0) count++;
	}
	printf("%d\n", count);
}