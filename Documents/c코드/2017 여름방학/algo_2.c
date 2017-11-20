#include <stdio.h>
int main(void){
	int i=0, sum=0;
	for(;i<=100;i+=2){
		sum+=i;
	}
	printf("%d\n",sum);
}
