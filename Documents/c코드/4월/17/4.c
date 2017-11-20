#include <Stdio.h>
int main() {
	int dan;
	printf("단을 입력하세요 : "); scanf("%d", &dan);

	if (dan > 1 && dan < 10) {
		printf("===========================\n");
		for (int i = 2; i <= 9; i++)
			printf("%d * %d = %d\n", dan, i, dan*i);
		printf("===========================\n");
	}
	else printf("ERROR\n");
}