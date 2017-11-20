#include <Stdio.h>
void Year(int y) {
	if (y % 4 == 0 || y % 400 == 0 && y % 100 != 0)
		printf("À±³â\n");
	
	else printf("Æò³â\n");
}
int main(void) {
	int year = 0;
	scanf("%d", &year);
	Year(year);
}