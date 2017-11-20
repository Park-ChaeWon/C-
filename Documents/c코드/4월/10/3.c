#include <stdio.h>
int main() {
	int k,sum=0;
	k = 1;
	while (k <= 100) {
		sum += k;
		k++;
}
	printf("%d\n", sum);
}