#include <stdio.h>
int main(void) {
	FILE *fp = fopen("me.txt","w");
	
	fputs("학교 : 대덕소프트웨어마이스터고\n", fp);
	fputs("반 : 1학년 3반\n", fp);
	fputs("번호 : 6번\n", fp);
	fputs("이름 : 박채원\n", fp);
	
	fclose(fp);
	return 0;
}