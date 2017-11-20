#include <stdio.h>
int main(void) {
	int hour = 0, min = 0;
	scanf("%d %d", &hour, &min);
	int time=0;
	if(hour ==0 ) hour = 24;
	time = (hour*60)+min -30 ;
	hour = time / 60;
	min = time % 60;
	
	if(hour == 24) hour =0;
	printf("%d %d\n",hour, min);
}


