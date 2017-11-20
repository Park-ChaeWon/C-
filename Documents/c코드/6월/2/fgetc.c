#include <stdio.h>
int main(Void) {
	FILE* fp;
	char ch;

	fp= fopen("a.txt", "r");
	if (fp == NULL) {
		printf("파일 개방 실패\n");
		return 1;
	}
	ch = fgetc(fp);
	printf("입력한 문자 : %c\n", ch);
	ch = fgetc(fp);
	printf("입력한 문자 : %c\n", ch);
	ch = fgetc(fp);
	printf("입력한 문자 : %c\n", ch);
	ch = fgetc(fp);
	printf("입력한 문자 : %c\n", ch);
	/* //위의 코드와 같은 결과
	while (1) {
		ch = fgetc(fp);
		if (ch == EOF) break;
		putchar(ch);
	}
	*/

	fclose(fp);
	return 0;
}