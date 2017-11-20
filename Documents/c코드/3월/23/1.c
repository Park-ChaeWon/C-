#include<stdio.h>
int main() {
	printf("%d \n", sizeof(123.456F));
	printf("%d \n", sizeof(123.456));

	printf("%f \n", 123.456F);
	printf("%lf \n", 123.456);
	printf("%f \n", 123.456);
}