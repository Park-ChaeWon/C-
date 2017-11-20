#include <stdio.h>
int mod(int n, int k){
	if (n%k==0) return 0;
	else return 1;
}
int main(void){
	int a[100], num=0, k=0, i=0, l=0;
	
	scanf("%d", &num);
	
	k+=1;
	while(k<=num){w
		if(mod(num,k)==0){
			l++;
			a[i++]=k;
		}
	}
	
	printf("%d\n",num);
	for(i=0;i<l;i++)
		printf("%d ",a[i]);
		
}
