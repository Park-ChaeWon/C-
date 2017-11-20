#include <stdio.h>
int f(int a, int b)
{
	if(a==b) return 1;
	else if(a<10) return 0;
	return f(a%10, b)+f(a/10, b);
}
int main()
{
	int a, b, k;
	scanf("%d%d%d", &a, &b, &k);
	int sum=0;

	int i;
	for(i=a; i<=b; i++)
	{
		sum+=f(i, k);
	}
	printf("%d", sum);
	return 0;
}
