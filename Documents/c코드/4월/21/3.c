#include <stdio.h>
int main(void) {
	char szBuffer[32] = { 0 };
	int nLength = 0;
	printf("�̸��� �Է��ϼ��� : "); 
	gets(szBuffer);
	while (szBuffer[nLength] != '\0') {
		nLength++;
	}
	printf("����� �̸��� %s(%d)\n", szBuffer, nLength);

}