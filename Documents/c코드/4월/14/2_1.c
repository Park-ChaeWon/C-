#include <Stdio.h>
// 3+6+9=18 포문으로 출력하기 
int main(void) {
	int i, sum=0;
	for (i = 3; i <= 10; i += 3) {
		printf(" %d +", i); sum += i;
	}
	printf("\b=%d\n",sum);
	/*
	int i,sum=.0;
	for(i=3;i<10;i+=3){
	printf(" %d +",i);
	if(i!=9){
	printf("+");
	}
	sum+=i;
	}
	printf("= %d\n",sum);
	*/
}