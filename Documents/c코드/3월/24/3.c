#include<stdio.h>
int main() {
	int age = 0;
	char name[20];
	printf("���̸� �Է��ϼ��� : "); scanf("%d", &age);
	printf("�̸��� �Է��ϼ��� : "); scanf("%s", name);

	printf("����� ���̴� %d ���̰�, �̸��� '%s'�Դϴ�. \n", age, name);
}