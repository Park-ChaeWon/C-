#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
int main(void) {
	int rsp_c, rsp_p;
	char answer;
	char rsp_R[4][5] = { " " ,"����","����", "��" };
	srand((unsigned)time(NULL));
	while (1) {
		rsp_c = (rand() % 3) + 1;

		printf("����(1) / ����(2) / ��(3) �� �ϳ��� �����ϼ��� : ");
		scanf("%d", &rsp_p);
		printf("\n");

		printf("��ǻ�� : %s\t\t�� : %s\n\n", rsp_R[rsp_c], rsp_R[rsp_p]);

		Sleep(500);
		if (rsp_c == 1 && rsp_p == 3 || rsp_c == 2 && rsp_p == 1 || rsp_c == 3 && rsp_p == 2)
			printf("�̰���ϴ�!\n\n");
		else if (rsp_c == rsp_p)
			printf("�����ϴ�!\n\n");
		else printf("�����ϴ٤Ф�\n\n");
	
		printf("�ٽ� �� �� �Ͻðڽ��ϱ�? (y/n) : ");
		scanf(" %c", &answer);
		if (answer == 'y' || answer == 'Y') {
			printf("�� ������ �ϱ� ���� ����Ű�� ��������\n");
			_getch();
			system("cls");
		}
		else {
			printf("������ �����մϴ�\n");
			break;
		}
	}
}
