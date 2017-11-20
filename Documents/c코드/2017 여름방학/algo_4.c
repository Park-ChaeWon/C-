#include <stdio.h>
int main(void){
	int s=0, d=1, t;
	while(d<=10){
		t = 1/d;
		s+=t;
		d+=1;
	}
	printf("%d\n",s);
}
