#include <stdio.h>
int main(void){
	int time=0, goal, i, cnt=0;
	
	scanf("%d %d",&time, &goal);
	if(time >= 90) printf("0");
	cnt = goal;
		for(i=time;i<90;i+=5)
			 cnt++;
		printf("%d",cnt);
}
