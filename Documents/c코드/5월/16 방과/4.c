#include <Stdio.h>
int main(void) {
	int year=0;
	int month = 0;
	int day[] = {31,28,31,30,31,30,31,31,30,31,30,31};

	printf("YEAR : "); scanf("%d", &year);
	printf("MONTH : "); scanf("%d", &month);

	if (month < 0 || month>12) { 
	printf("�߸��Է��ϼ̽��ϴ�.\n"); 
	return 0;
	}

	if (year % 4 == 0 && year & 400 == 0 && year % 100 != 0) 
		day[1] = 29;
	
	
	printf("�Է��Ͻ� ���� �� ���� %d�� �Դϴ�.\n", day);

	return 0;
}