#include <stdio.h>
int main() {
	int year, month, day, a;
	printf("�¾ ����, ��, ���� ���ʴ�� �Է��ϼ��� : ");
	scanf("%d %d %d", &year, &month, &day);
	a = year - month + day;
	if (a % 10 == 0) printf("���\n");
	else printf("�׷�����\n");
}