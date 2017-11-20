#include<stdio.h>
int main(){
	int num = 0, i = 0,sum=0;
	printf("숫자 입력 : "); scanf("%d", &num);

	while (i <= num) {
		sum += i;
		i++;
	}
	printf("%d\n", sum);
}