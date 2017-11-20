#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
int main(void) {
	int rsp_c, rsp_p;
	char answer;
	char rsp_R[4][5] = { " " ,"바위","가위", "보" };
	srand((unsigned)time(NULL));
	while (1) {
		rsp_c = (rand() % 3) + 1;

		printf("가위(1) / 바위(2) / 보(3) 중 하나를 선택하세요 : ");
		scanf("%d", &rsp_p);
		printf("\n");

		printf("컴퓨터 : %s\t\t나 : %s\n\n", rsp_R[rsp_c], rsp_R[rsp_p]);

		Sleep(500);
		if (rsp_c == 1 && rsp_p == 3 || rsp_c == 2 && rsp_p == 1 || rsp_c == 3 && rsp_p == 2)
			printf("이겼습니다!\n\n");
		else if (rsp_c == rsp_p)
			printf("비겼습니다!\n\n");
		else printf("졌습니다ㅠㅠ\n\n");
	
		printf("다시 한 번 하시겠습니까? (y/n) : ");
		scanf(" %c", &answer);
		if (answer == 'y' || answer == 'Y') {
			printf("새 게임을 하기 위해 엔터키를 누르세요\n");
			_getch();
			system("cls");
		}
		else {
			printf("게임을 종료합니다\n");
			break;
		}
	}
}
