#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main(void) {
	int num = 0, howmany=0;
	printf("�л����� �Է��ϼ��� : "); scanf("%d", &howmany);

	srand((unsigned)time(NULL));
	num = (rand() % howmany) + 1;
	printf("��ȣ�� ���� ���ؼ� ����Ű�� �������� \n");
	_getch();
	system("cls");

	printf("�α��α��α�!!\n");
	Sleep(500);
	printf("�α��α��α�!!!!\n");
	Sleep(500);
	printf("�α��α��α�!!!!!!\n");
	Sleep(1000);
	printf("���� ��ȣ��!!!!!!!!! ");
	Sleep(700);
	printf("%d�� �Դϴ� ��(^��^)��\n\n\n\n\n", num);
}