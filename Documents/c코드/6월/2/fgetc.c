#include <stdio.h>
int main(Void) {
	FILE* fp;
	char ch;

	fp= fopen("a.txt", "r");
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return 1;
	}
	ch = fgetc(fp);
	printf("�Է��� ���� : %c\n", ch);
	ch = fgetc(fp);
	printf("�Է��� ���� : %c\n", ch);
	ch = fgetc(fp);
	printf("�Է��� ���� : %c\n", ch);
	ch = fgetc(fp);
	printf("�Է��� ���� : %c\n", ch);
	/* //���� �ڵ�� ���� ���
	while (1) {
		ch = fgetc(fp);
		if (ch == EOF) break;
		putchar(ch);
	}
	*/

	fclose(fp);
	return 0;
}