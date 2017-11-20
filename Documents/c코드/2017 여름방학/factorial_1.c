#include <stdio.h>
int fac(int n);
int main(void){
	int n=0;
	scanf("%d", &n);
	
	printf("%d! = %d\n", n, fac(n));
}
int fac(int n){
	if(n>1) return n*fac(n-1);
	else return 1;
}
