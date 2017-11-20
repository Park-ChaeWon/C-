#include <Stdio.h>
int f(int a, int b) {
	if (a > b) return a;
	else return b;
}
int main(void) {
	int a=0, b=0;
	scanf("%d %d", &a, &b);
	printf("%d\n", f(a, b));

}