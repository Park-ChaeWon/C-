#include<stdio.h>
int main(){
	int num = 0, i = 0,sum=0;
	printf("���� �Է� : "); scanf("%d", &num);

	while (i <= num) {
		sum += i;
		i++;
	}
	printf("%d\n", sum);
}