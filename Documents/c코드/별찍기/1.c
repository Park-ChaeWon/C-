#include <stdio.h>
int main(void) {
	int i=0, j;
	if (i < 5) {
		for (i = 1; i < 6; i++) {
			for (j = 4; j >=i ;j--) { //���� ����
				printf(" ");
			}
			for (j = 1; j <= i; j++) { //�� ����
				printf("*");
			}printf("\n");
	}
	}//end if
	if (i >= 5)
	{
		for (i = 1; i < 5; i++) {
			for (j = 1; j <= i ; j++) { //���� ����
				printf(" ");
			}
			for (j = 4; j >=i ; j--) { //�� ����
				printf("*");
			}printf("\n");
		}
	}
		return 0;
} // end main
