/*
#include <stdio.h>
int sum = 1;
int F(int n) {
	if (n == 1) return;
	
	F(n - 1);
	sum *= n;
	return sum;
}
int main(void) {
	int num;
	scanf("%d", &num);
	printf("%d! = %d\n",num,F(num) );
	return 0;
}
*/
#include <stdio.h>
int F(int n) {
	if (n == 1) return 1;
	else return (n*F(n - 1));
}
int main(void) {
	int num;
	scanf("%d", &num);
	printf("%d! = %d\n", num, F(num));
	return 0;
}