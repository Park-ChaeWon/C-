#include <Stdio.h>
void f(int *a, int* b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	f(&a, &b);
	printf("%d %d\n", a, b);

}