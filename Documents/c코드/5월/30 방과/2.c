#include <Stdio.h>
int main(void) {
	char str[] = "Good Morning!";
	int num[5] = { 0 };
	int i;

	for (i = 0; i < 5; i++) scanf("%d", &num[i]);

	for (i = 0; i < 5; i++) {
		printf("%c ", str[num[i]]);
	}
	printf("\n");
}