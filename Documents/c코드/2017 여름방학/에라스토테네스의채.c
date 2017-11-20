#include <stdio.h>
#include <stdlib.h>
#define MAX 1001
int main(void){
	int a[MAX];
	int i, j;
	
	for(i=2;i<MAX;i++) a[i]=1;
	
	for(i=2; i<MAX; i++){
		for(j=i+1; j<MAX; j++){
			if(j%i==0) a[j]=0;
		}
	}

	for(i=2;i<MAX;i++){
		if(a[i]==1) printf("%d ", i);
	}
	printf("\n");
}
