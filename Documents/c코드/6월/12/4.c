#include <stdio.h>
int main(void) {
	FILE* fp = fopen("data.txt", "w");
	int num = 0, age = 0, height = 0;
	char name[20];
	char address[20];
	while(1) {
		printf("학번 : "); scanf("%d", &num);
		if (num < 0) break;
		getchar();
		printf("이름 : "); scanf("%s", name);
		printf("나이 : "); scanf("%d", &age);
		printf("키   : "); scanf("%d", &height);
		getchar();
		printf("주소 : ");
		gets(address);
		
		fprintf(fp, "%d\n", num);
		fprintf(fp,"%s %d %d\n", name, age, height);
		fprintf(fp,"%s\n", address);
		
	}	


}