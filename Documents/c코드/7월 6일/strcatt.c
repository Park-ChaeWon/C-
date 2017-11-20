#include <Stdio.h>
#include <string.h>
int main(void) {
	char* str1 = "DEF";
	char str2[100] = "ABC";
	strcat(str2, str1);
	printf("%s\n", str2);
	strncat(str2, str1, 2);
	puts(str2);
}