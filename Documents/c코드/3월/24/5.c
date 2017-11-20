#include<stdio.h>
int main(void) {
	char szBuffer[32] = { 0 };
	scanf("%[^\n]s", szBuffer);
	printf("%s \n", szBuffer);
}