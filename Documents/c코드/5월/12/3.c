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
			printf("�� �׸��� �߰��մϴ�.\n");
			break;
		case 2:
			printf("���� �׸񿡼� �˻��մϴ�. \n");
			break;
		case 3:
			printf("��ü ������ ����մϴ�.\n");
			break;
		case 4:
			printf("���� �׸��� �����մϴ�.\n");
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