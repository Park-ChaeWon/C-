#include <stdio.h>
#include <windows.h>
#define MAX 10
FILE* fp;

void Print(int num[], int mid, int l) {
	int j;
	fp = fopen("10306_��ä��_����Ž��.txt", "a");
	for (j = 0; j < l; j++) {
		if (j == mid) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
			printf("  [%d] ", num[j]);
			fprintf(fp, "  [%d] ", num[j]);
		}
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 224);
			printf("%5d ", num[j]);
			fprintf(fp, "%5d ", num[j]);
		}
	}
	printf("\n");
	fprintf(fp, "\n");
}

int main(void) {
	int left = 0, right, mid;
	int num[MAX] = { 0 };
	int number = 0;
	int i, j, l = 0;

	fp = fopen("10306_��ä��_����Ž��.txt", "w");

	int age = 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 224);

	while(1){
		printf("�����ϱ� ���ؼ� ������ �ذ����ּ���\n");
		printf("����Ű�� �������� \n");
		_getch();
		system("cls");
		printf("����� 10���� ź ������ �����ϰ� �ֽ��ϴ�.\n\n");
		printf("����Ű�� �������� \n");
		_getch();
		system("cls");
		printf("ù �����忡�� 4���� ������ 2���� �����ϴ�.\n\n");
		printf("����Ű�� �������� \n");
		_getch();
		system("cls");
		printf("���� �����忡�� 3���� ������ 5���� �����ϴ�.\n\n");
		printf("����Ű�� �������� \n");
		_getch();
		system("cls");
		printf("������ �����忡�� 6���� ������ 1���� ž������.\n\n");
		printf("����Ű�� �������� \n");
		_getch();
		system("cls");
		printf("�׷� �������� ���̴� �� �ΰ���? : ");
		scanf("%d", &age);
		
		if (age == 27 || age==28) { //�����ϱ� 
		printf("����Ű�� ������ ������ ���۵˴ϴ�. \n");
		_getch();
		system("cls");
			printf("%d�� ���� �Է�\n", MAX);
			printf("9999�� ������ �����ؼ� Ž�� ����\n");
			printf("================================\n");

			for (i = 0; i < MAX; i++) {
				scanf("%d", &num[i]);
				if (num[i] == 9999) break;
				l++;
			}

			for (i = 0; i<l - 1; i++) //�Է� �� ���� 
			{
				for (j = 0; j<l - 1; j++)
				{
					if (num[j] > num[j + 1])
					{
						int temp = num[j];
						num[j] = num[j + 1];
						num[j + 1] = temp;
					}
				}
			}
			printf("���ĵ� �� : ");
			for (i = 0; i < l; i++)
				printf("%5d", num[i]);
			printf("\n");

			printf("ã�� ���� �Է��ϼ��� : ");
			scanf("%d", &number);
			fprintf(fp, "ã�� �� : %d\n", number);

			right = l - 1;
			for (i = 0; left <= right; i++) {
				mid = (left + right) / 2;
				if (num[mid] > number) right = mid - 1;
				else if (num[mid] < number) left = mid + 1;
				else {
					Print(num, mid, l);
					break;
				}

				Print(num, mid, l);
			}
			break;
		} //end if
		else {
			printf("�ٽ� �õ��� �ּ���..\n\n");
			_getch();
			system("cls");
		}
	}
}
