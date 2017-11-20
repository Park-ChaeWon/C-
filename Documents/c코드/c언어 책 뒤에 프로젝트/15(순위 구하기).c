#include <stdio.h>
int grade[100];	
int num = 0;
int rank(int i) {
	int r = 0;
	for ( ; i < num; i++) {

	}
	return r;
}

int main(void) {
	int i;
	
	scanf("%d", &num);

	for (i = 0; i < num; i++) 
		scanf("%d", &grade[i]);
	

	for (i = 0; i < num; i++) {
		printf("%d¹ø %dµî\n", i + 1, rank(i));
	}
}