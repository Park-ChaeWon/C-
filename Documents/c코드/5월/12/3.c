#include <Stdio.h>

int PrintMenu() {
	int select;
	printf("[1]New   [2]Search   [3]Print   [4]Remove   [0]Exit\n");
	scanf("%d", &select);
	if (select == 0) select =5;
	return select;
}
int Func(int num) {
	switch(num) {
		case 1:
			printf("새 항목을 추가합니다.\n");
			break;
		case 2:
			printf("기존 항목에서 검색합니다. \n");
			break;
		case 3:
			printf("전체 내용을 출력합니다.\n");
			break;
		case 4:
			printf("기존 항목을 삭제합니다.\n");
			break;
		case 5: 
			printf("Bye~~!\n");
			return 0;
		default:
			break;
	}
}

int main(void) {
	int select=0;
	while (select!=5) {
		select = PrintMenu();
		Func(select);
	}

}