#include<stdio.h>
int main() {
	int age = 0;
	char name[20], code;
	double secure=0;
	printf("�̸��� �Է��ϼ��� : "); scanf("%s", name);
	printf("���̸� �Է��ϼ��� : "); scanf("%d", &age);
	printf("�μ��ڵ带 �Է��ϼ��� : "); scanf(" %c", &code);
	printf("����Ű�� �Է��ϼ��� : "); scanf("%lf", &secure);

	printf("*****************\n");
	printf("�̸� : %s \n", name);
	printf("����: %d \n", age);
	printf("�μ��ڵ� : %c \n", code);
	printf("����Ű : %.3lf \n", secure);
	printf("*****************\n");
}