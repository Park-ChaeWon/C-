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
		printf("��\n");
		break;
	case 1: 
		printf("��\n");
		break;
	case 2:
		printf("��\n");
		break;
	case 3:
		printf("��\n");
		break;
	case 4:
		printf("��\n");
		break;
	default :
		break;
	}
}
int main(void) {
	int i = 0, how;
	int throwing[4] = { 0 };
	printf("4���� �� ���¸� �Է��ϼ���.\n0 : ���������� ���� ����, 1 : �������� ����\n");
	for (i = 0; i < 4; i++)
		scanf("%d", &throwing[i]);
	how=Yut(throwing);
	Print(how);
}