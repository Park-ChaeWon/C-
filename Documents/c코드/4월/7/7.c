#include <stdio.h>
int main() {
	int year, month, day, a;
	printf("태어난 연도, 달, 일을 차례대로 입력하세요 : ");
	scanf("%d %d %d", &year, &month, &day);
	a = year - month + day;
	if (a % 10 == 0) printf("대박\n");
	else printf("그럭저럭\n");
}