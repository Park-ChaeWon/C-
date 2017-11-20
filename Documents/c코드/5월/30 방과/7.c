#include <Stdio.h>
int main(void) {
	char str[3][20];
	int i;
	for (i = 0; i < 3; i++) {
		scanf("%s", str[i]);
	}
	for (i = 2; i >= 0; i--)
		printf("%s\n", str[i]);
}