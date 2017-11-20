#include <Stdio.h>
int main(void) {
	int data = 0;
	printf("data's value : %d, data's address : %d\n", data, &data);
	printf("data's value : %d\n", *&data);

	int* point1;
	point1 = &data;
	printf("point1's value : %d, point1's address : %d\n", point1, &point1);
	printf("data's value by point1 : %d\n", *point1);

	int *point2;
	point2 = point1;
	printf("point2's value : %d, point2's address : %d\n", point2, &point2);
	printf("data's value by point2 : %d\n", *point2);

	int **point3;
	point3 = &point2;
	printf("point3's value : %d, point3's address : %d\n", point3, &point3);
	printf("point2's value by point3 : %d, data's value by point3 : %d\n", *point3,**point3);
}