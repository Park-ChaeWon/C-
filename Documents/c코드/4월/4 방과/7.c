#include <stdio.h>
int main() {
	int age, price;
	printf("���� : "); scanf("%d", &age);
	if (age < 8) price = 0;
	else if (age >= 8 && age < 60) price = 5000;
	else price = 2500;

	printf("����� : %d\n", price);
}