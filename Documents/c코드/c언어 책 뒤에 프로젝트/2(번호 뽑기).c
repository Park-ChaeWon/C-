#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main(void) {
	int num = 0, howmany=0;
	printf("학생수를 입력하세요 : "); scanf("%d", &howmany);

	srand((unsigned)time(NULL));
	num = (rand() % howmany) + 1;
	printf("번호를 보기 위해서 엔터키를 누르세요 \n");
	_getch();
	system("cls");

	printf("두구두구두구!!\n");
	Sleep(500);
	printf("두구두구두구!!!!\n");
	Sleep(500);
	printf("두구두구두구!!!!!!\n");
	Sleep(1000);
	printf("뽑힌 번호는!!!!!!!!! ");
	Sleep(700);
	printf("%d번 입니다 ↖(^▽^)↗\n\n\n\n\n", num);
}