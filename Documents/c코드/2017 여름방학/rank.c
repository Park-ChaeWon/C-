#include <stdio.h>
#define MAX 5
int main(void){
	int sj[MAX];
	int rk[MAX];
	int i, j;
	
	for(i=0;i<MAX;i++)
	{
		scanf("%d", &sj[i]);
		rk[i]=1;	
	} 
	
	printf("\n=====================\n"); 
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++)
			if(sj[i]<sj[j]) rk[i]++;
	
		printf("%3dÁ¡ |%3dµî\n", sj[i], rk[i]);
	} 
	
}
