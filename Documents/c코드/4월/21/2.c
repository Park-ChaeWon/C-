#include <Stdio.h>
int main(void) {
	char szBuffer[6] = { 'H','e','l','l','o','\0' };
	char szData[8] = { "Hello" };
	char *pszBuffer = "Hello";
	puts(szBuffer);
	puts(szData);
	puts(pszBuffer);
}