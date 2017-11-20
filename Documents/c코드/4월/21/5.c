#include <stdio.h>
int main(void) {
	int aList[3][4] = { 0 };
	int i = 0, j = 0,k=1;
	for (i=0; i < sizeof(aList) / sizeof(aList[0]); i++) {
		for (j=0; j < sizeof(aList[0]) / sizeof(int); j++) {
			aList[i][j] = k;
			printf("%d\t", aList[i][j]);
			k=k+2;
		}
		printf("\n");
	}
}