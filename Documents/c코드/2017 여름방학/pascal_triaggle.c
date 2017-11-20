#include <stdio.h>
#define MAX 10*10
int main(void){
	unsigned long long int p[MAX][MAX]={0};
	int i, j, a;
	
	scanf("%d", &a);

	for(i=1;i<=(a+1);i++){
		for(j=1;j<=i;j++){
			if(i==1 && j==1) p[i][j]=1;
			else p[i][j] = p[i-1][j-1] + p[i-1][j];
			
			printf("%llu  ", p[i][j]);
		}
		printf("\n");
	}
}
