#include <Stdio.h>
int main(void) {
	int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int which_month=0, year = 0;
	scanf("%d %d",&year, &which_month);

	if ((year % 400) == 0 && (year % 4) == 0 || (year % 100) != 0 )
				days[2] = 29;
	
	printf("%d년 %d의 마지막 날은 %d입니다.\n", year, which_month, days[which_month]);
}