#include<stdio.h>
int main() {
	float a =0.0;
	for (int i = 0; i < 50; i++) {
		a += 0.1F;
	}
	printf("%f \n", a);
}