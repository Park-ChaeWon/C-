#include <stdio.h>
int main(void) {
	int date;
	printf("날짜를 입력하세요 : "); scanf("%d", &date);
	
	switch ((date - 1) / 7){
	case 0: printf("첫째주\n"); break;
	case 1: printf("둘째주\n"); break;
	case 2: printf("셋째주\n"); break;
	case 3: printf("넷째주\n"); break;
	case 4: printf("다섯째주\n"); break;
	default: printf("잘못 입력하였습니다.\n"); break;
	}

}