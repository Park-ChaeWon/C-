#include <Stdio.h>
int main(void) {

	int a = 0, b = 0;
	int max = 0;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a || i <= b; i++) {
		if (a%i == 0 && b%i == 0) max = i;
}
	printf("최대 공약수 : %d\n", max);

}