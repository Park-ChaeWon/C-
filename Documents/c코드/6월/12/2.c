#include <stdio.h>
int main(void) {
	FILE *fp2 = fopen("me.txt", "a");
	fputs("전화번호 : 01094594325\n", fp2);
	fclose(fp2);
}