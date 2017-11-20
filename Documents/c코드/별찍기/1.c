#include <stdio.h>
int main(void) {
	int i=0, j;
	if (i < 5) {
		for (i = 1; i < 6; i++) {
			for (j = 4; j >=i ;j--) { //공백 감소
				printf(" ");
			}
			for (j = 1; j <= i; j++) { //별 증가
				printf("*");
			}printf("\n");
	}
	}//end if
	if (i >= 5)
	{
		for (i = 1; i < 5; i++) {
			for (j = 1; j <= i ; j++) { //공백 증가
				printf(" ");
			}
			for (j = 4; j >=i ; j--) { //별 감소
				printf("*");
			}printf("\n");
		}
	}
		return 0;
} // end main
