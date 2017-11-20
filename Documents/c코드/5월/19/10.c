#include <stdio.h>
int Yut(int throwing[]) {
	int zero = 0;
	for (int i = 0; i < 4; i++) {
		if (throwing[i] == 1)
			zero++;
	}
	return zero;
}
void Print(int zero) {
	switch (zero) {
	case 0: 
		printf("모\n");
		break;
	case 1: 
		printf("도\n");
		break;
	case 2:
		printf("개\n");
		break;
	case 3:
		printf("걸\n");
		break;
	case 4:
		printf("윷\n");
		break;
	default :
		break;
	}
}
int main(void) {
	int i = 0, how;
	int throwing[4] = { 0 };
	printf("4개의 윷 상태를 입력하세요.\n0 : 뒤집어지지 않은 상태, 1 : 뒤집어진 상태\n");
	for (i = 0; i < 4; i++)
		scanf("%d", &throwing[i]);
	how=Yut(throwing);
	Print(how);
}