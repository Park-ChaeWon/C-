#include <stdio.h>
int main(void) {
	float rate[3] = { 0 };
	int score[3] = { 0 };
	int i;
	float sum = 0;
	printf("*******���� ���� ��� ���α׷�*******\n");
	for (i = 0; i < 3; i++) {
		if (i == 0) printf("�߰���� �ݿ�����/���� ������ �Է��ϼ��� : ");
		if (i == 1) printf("�⸻��� �ݿ�����/���� ������ �Է��ϼ��� : ");
		if (i == 2) printf("������ �ݿ�����/���� ������ �Է��ϼ��� : ");
		scanf("%f %d", &rate[i], &score[i]);
	}
	for (i = 0; i < 3; i++)
		sum += rate[i] * score[i];

	printf("������ %.1f�Դϴ�.\n", sum);

}