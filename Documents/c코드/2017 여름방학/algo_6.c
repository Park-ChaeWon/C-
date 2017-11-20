#include <stdio.h>
int mod(int n, int m){
	if(n%m==0) return 0;
	else return 1; 
}
int main(void){
	int cnt = 0, sum = 0, i;
	for(i=1;i<=100;i++){
		if(mod(i, 5)==0){
			cnt++;
			sum+=i;
		}
	}
	printf("%d %d\n",cnt, sum);
}
