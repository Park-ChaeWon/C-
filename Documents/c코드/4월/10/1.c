#include <stdio.h>
int main() {
	int a, b,i,temp=0;
	scanf("%d %d", &a, &b);

	if(a>b){
	temp=a;
	a=b;
	b=temp;
	}

	for(i=a;i<=b;i++) printf("%d ",i);
	

		
	
	

}