#include <stdio.h>
#include <windows.h>
#include <string.h>

#define DATA 10

int sum_C = 0, sum_S = 0;

void swap(int *a, int *b);
int main()
{
	FILE *fp = fopen("10306_��ä��_��������.txt", "w");
	int num[DATA];
	int i, j, k;
	int len = 0;
	int cnt_C = 0, cnt_S = 0;

	printf("%d�� ������ ���� �Է�\n", DATA);
	printf("9999 �Է� �� ����\n");
	printf("=======================\n");

	for (i = 0; i < DATA; i++) {
		scanf("%d", &num[i]);
		if (num[i] == 9999) {
			break;
		}
		len++;
	}

	for (i = 0; i<len - 1; i++)
	{
		cnt_C = 0, cnt_S = 0;
		for (j = 0; j<len - 1; j++)
		{
			if (num[j] > num[j + 1])
			{
				swap(&num[j], &num[j + 1]);
				cnt_S++;
				sum_S++;
			}
		}
		cnt_C = j - i;
		sum_C += cnt_C;

		for (k = 0; k < len; k++) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
			printf("%7d", num[k]);
			fprintf(fp, "%7d", num[k]);
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

		printf("    || �� Ƚ�� : %5d, ��ȯ Ƚ�� : %5d\n", cnt_C, cnt_S);
		fprintf(fp, "    || �� Ƚ�� : %5d, ��ȯ Ƚ�� : %5d\n", cnt_C, cnt_S);
	}
	printf("�� �� Ƚ�� : %5d, �� ��ȯ Ƚ�� : %5d\n", sum_C, sum_S);
	fprintf(fp, "�� �� Ƚ�� : %5d, �� ��ȯ Ƚ�� : %5d\n", sum_C, sum_S);
}
void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}