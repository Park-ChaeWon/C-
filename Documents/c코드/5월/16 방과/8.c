#include <Stdio.h>
int main(void) {
	int two[5] = { 1,1,0,0,1 };
	int i;
	int Double = 1;

	for (i = 5; i >=1; i--) 
		Double=( Double* 2) + two[i];
	
	printf("%d\n",Double);
}