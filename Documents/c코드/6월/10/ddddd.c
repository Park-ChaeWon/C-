#include <stdio.h>
int max = 0;
void f(int a, int b) {
	a > b ? max = a : max =  b;
}
int main() {
	int arr[10] = { 20,852,63,20,41385,252,6,341,5,2 };
	int i;
	for (i = 0; i<9; i++) {
		f(arr[i], arr[i + 1]);
	}
	printf("%d\n", max);
}