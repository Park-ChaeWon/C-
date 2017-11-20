#include <Stdio.h>
int main(void){
	int i=0, sum=0, sw=1;
	for(;i<100;i++){
		sum = sum + i*sw;
		sw *= -1;
	}
	printf("%d\n",sum);
}
