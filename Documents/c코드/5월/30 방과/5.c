#include <Stdio.h>
int main(void) {
	char str[100];
	int i, num,lenth=0;
	printf("���ڿ� �Է� : ");  scanf("%s", str);
	printf("���� �Է� : ");  scanf("%d", &num);

	while (str[lenth] != '\0') lenth++;

	for (i = lenth-1; i >=lenth-num; i--) {
		printf("%c", str[i]);
	}
	printf("\n");


}