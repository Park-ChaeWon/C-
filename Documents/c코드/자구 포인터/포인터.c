#include <stdio.h>
int main(void) {
	int data = 0;
	int *p1 = &data;
	int *p2 = p1;
	int **p3 = &p2;

	printf("%d %d %d\n", data, &data, *&data);
	printf("%d %d\n", &p1, *p1);
	printf("%d %d\n", &p2, *p2);
	printf("%d %d %d %d\n", p3, &p3, *p3, **p3);
}