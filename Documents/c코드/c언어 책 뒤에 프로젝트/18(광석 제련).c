#include <stdio.h>
int main(void) {
	int ghang[5][5] = { 0 };
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			scanf("%d",&ghang[i][j]);
		printf("\n");
	} 
}