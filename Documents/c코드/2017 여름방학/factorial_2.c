#include <stdio.h>
int fac(int n);
int main(void){
	int n=0, i;
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	printf("%d! = %d\n", i, fac(i));
}
int fac(int n){
	if(n>1) return n*fac(n-1);
	else return 1;
}
