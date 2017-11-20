#include<stdio.h>
int main() {
	int age = 0;
	char name[20], code;
	double secure=0;
	printf("이름을 입력하세요 : "); scanf("%s", name);
	printf("나이를 입력하세요 : "); scanf("%d", &age);
	printf("부서코드를 입력하세요 : "); scanf(" %c", &code);
	printf("보안키를 입력하세요 : "); scanf("%lf", &secure);

	printf("*****************\n");
	printf("이름 : %s \n", name);
	printf("나이: %d \n", age);
	printf("부서코드 : %c \n", code);
	printf("보안키 : %.3lf \n", secure);
	printf("*****************\n");
}