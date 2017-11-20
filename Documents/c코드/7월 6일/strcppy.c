#include <stdio.h>
#include <string.h>

int main(void) {
	char* str1 = "ABCDE";
	char str2[10], str3[10] = { 0 };
	strcpy(str2, str1);
	strncpy(str3, str1, 3);
	printf("%s %s %s\n", str1, str2, str3);

	return 0;
}