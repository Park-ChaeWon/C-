#include <stdio.h>
int main(void) {
	FILE *fp2 = fopen("me.txt", "a");
	fputs("��ȭ��ȣ : 01094594325\n", fp2);
	fclose(fp2);
}