#include<stdio.h>
int main() {
	int age = 0;
	char name[20];
	printf("나이를 입력하세요 : "); scanf("%d", &age);
	printf("이름을 입력하세요 : "); scanf("%s", name);

	printf("당신의 나이는 %d 세이고, 이름은 '%s'입니다. \n", age, name);
}