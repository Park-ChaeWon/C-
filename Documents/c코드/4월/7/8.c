#include <stdio.h>
int main() {
	int t1, t2, t3, car = 170;
	printf("세 터널의 높이 입력 : ");
	scanf("%d %d %d", &t1, &t2, &t3);
	if (t1 > car && t2 > car && t3 > car) printf("무사통과\n");
	else {
		printf("충돌 ");
		if (t1 < car) printf("%d\n", t1);
		else if (t2 < car) printf("%d\n", t2);
		else printf("%d\n", t3);
	}
}