#include<stdio.h>
void add() {
	int a = 0, b = 0;
	printf("�� ���� ���� �Է� : "); scanf("%d %d", &a, &b);
	printf("%d + %d = %d \n", a, b, a + b);
}
void sub() {
	int a = 0, b = 0;
	printf("�� ���� ���� �Է� : "); scanf("%d %d", &a, &b);
	printf("%d - %d = %d \n", a, b, a - b);
}
void divi() {
	double a =0, b=0;
	double result=0;
	printf("�� ���� ���� �Է� : "); scanf("%lf %lf", &a, &b);
	result = a / b;
	printf("%.0lf / %.0lf = %lf \n", a, b, result);
}
void mul() {
	int a = 0, b = 0;
	printf("�� ���� ���� �Է� : "); scanf("%d %d", &a, &b);
	printf("%d * %d = %d \n", a, b, a * b);
}
int main() {
	int select = 0;
	while (select != 5) {
		printf("1.���� 2.���� 3.������ 4.���� 5.���� \n");
		printf("���� : "); scanf("%d", &select);

		switch (select) {
		case 1:
			add();
			break;
		case 2:
			sub();
			break;
		case 3:
			divi();
			break;
		case 4:
			mul();
			break;
		case 5:
			printf("���� \n");
			break;
		default:
			printf("���� \n");
			break;
		}
	}
}