#include <stdio.h>
#include <windows.h>
#define MAX 10
FILE* fp;

void Print(int num[], int mid, int l) {
	int j;
	fp = fopen("10306_박채원_이진탐색.txt", "a");
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

	fp = fopen("10306_박채원_이진탐색.txt", "w");

	int age = 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 224);

	while(1){
		printf("정렬하기 위해서 문제를 해결해주세요\n");
		printf("엔터키를 누르세요 \n");
		_getch();
		system("cls");
		printf("당신은 10명이 탄 버스를 운전하고 있습니다.\n\n");
		printf("엔터키를 누르세요 \n");
		_getch();
		system("cls");
		printf("첫 정류장에서 4명이 내리고 2명이 탔습니다.\n\n");
		printf("엔터키를 누르세요 \n");
		_getch();
		system("cls");
		printf("다음 정류장에서 3명이 내리고 5명이 탔습니다.\n\n");
		printf("엔터키를 누르세요 \n");
		_getch();
		system("cls");
		printf("마지막 정류장에선 6명이 내리고 1명이 탑승했죠.\n\n");
		printf("엔터키를 누르세요 \n");
		_getch();
		system("cls");
		printf("그럼 운전수의 나이는 몇 인가요? : ");
		scanf("%d", &age);
		
		if (age == 27 || age==28) { //수정하기 
		printf("엔터키를 누르면 정렬이 시작됩니다. \n");
		_getch();
		system("cls");
			printf("%d개 이하 입력\n", MAX);
			printf("9999를 누르면 정렬해서 탐색 시작\n");
			printf("================================\n");

			for (i = 0; i < MAX; i++) {
				scanf("%d", &num[i]);
				if (num[i] == 9999) break;
				l++;
			}

			for (i = 0; i<l - 1; i++) //입력 값 정렬 
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
			printf("정렬된 값 : ");
			for (i = 0; i < l; i++)
				printf("%5d", num[i]);
			printf("\n");

			printf("찾을 값을 입력하세요 : ");
			scanf("%d", &number);
			fprintf(fp, "찾을 값 : %d\n", number);

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
			printf("다시 시도해 주세요..\n\n");
			_getch();
			system("cls");
		}
	}
}
