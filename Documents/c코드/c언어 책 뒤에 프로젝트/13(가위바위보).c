#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int rsp_c, rsp_p;
	char answer;
	char rsp_R[4][5] = { " " ,"바위","가위", "보" };
	srand((unsigned)time(NULL));

	rsp_c = (rand() % 3) + 1;

	while(1){
		printf("바위(1) / 가위(2) / 보(3) 중 하나를 선택하세요 : ");
		scanf("%d", &rsp_p);
		if(rsp_p>3){
			printf("1~3의 숫자를 입력해주세요.\n\n");
			continue;
		}
		printf("\n");
		break;
	}
	printf("컴퓨터 : %s\t\t나 : %s\n\n", rsp_R[rsp_c], rsp_R[rsp_p]);

	if (rsp_c == 1 && rsp_p == 3 || rsp_c == 2 && rsp_p == 1 || rsp_c == 3 && rsp_p == 2)
		printf("이겼습니다!\n\n");
	else if (rsp_c == rsp_p)
		printf("비겼습니다!\n\n");
	else printf("졌습니다\n\n");
	}
	
	
	
	
