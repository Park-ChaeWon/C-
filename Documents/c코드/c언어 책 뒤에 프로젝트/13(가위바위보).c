#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int rsp_c, rsp_p;
	char answer;
	char rsp_R[4][5] = { " " ,"����","����", "��" };
	srand((unsigned)time(NULL));

	rsp_c = (rand() % 3) + 1;

	while(1){
		printf("����(1) / ����(2) / ��(3) �� �ϳ��� �����ϼ��� : ");
		scanf("%d", &rsp_p);
		if(rsp_p>3){
			printf("1~3�� ���ڸ� �Է����ּ���.\n\n");
			continue;
		}
		printf("\n");
		break;
	}
	printf("��ǻ�� : %s\t\t�� : %s\n\n", rsp_R[rsp_c], rsp_R[rsp_p]);

	if (rsp_c == 1 && rsp_p == 3 || rsp_c == 2 && rsp_p == 1 || rsp_c == 3 && rsp_p == 2)
		printf("�̰���ϴ�!\n\n");
	else if (rsp_c == rsp_p)
		printf("�����ϴ�!\n\n");
	else printf("�����ϴ�\n\n");
	}
	
	
	
	
