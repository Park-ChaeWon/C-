#include <stdio.h>
int main(void) {
	char szBuffer[32] = { 0 };
	int nLength = 0;
	printf("이름을 입력하세요 : "); 
	gets(szBuffer);
	while (szBuffer[nLength] != '\0') {
		nLength++;
	}
	printf("당신의 이름은 %s(%d)\n", szBuffer, nLength);

}