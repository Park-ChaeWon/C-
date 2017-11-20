#include <stdio.h>
//수 거꾸로 출력하기
int main(void){
	int num,a,i=1;
	printf("수를 입력하세요 : "); scanf("%d", &num);
	printf("%d => ", num);
	while (num!=0) {
		printf("%d", num % 10);
		num /= 10;
}
	puts(" ");

}