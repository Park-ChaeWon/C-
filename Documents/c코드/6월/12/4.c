#include <stdio.h>
int main(void) {
	FILE* fp = fopen("data.txt", "w");
	int num = 0, age = 0, height = 0;
	char name[20];
	char address[20];
	while(1) {
		printf("�й� : "); scanf("%d", &num);
		if (num < 0) break;
		getchar();
		printf("�̸� : "); scanf("%s", name);
		printf("���� : "); scanf("%d", &age);
		printf("Ű   : "); scanf("%d", &height);
		getchar();
		printf("�ּ� : ");
		gets(address);
		
		fprintf(fp, "%d\n", num);
		fprintf(fp,"%s %d %d\n", name, age, height);
		fprintf(fp,"%s\n", address);
		
	}	


}