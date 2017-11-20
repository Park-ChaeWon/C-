#include <Stdio.h>
int main(void) {
	char str[100];
	int i, num,lenth=0;
	printf("문자열 입력 : ");  scanf("%s", str);
	printf("숫자 입력 : ");  scanf("%d", &num);

	while (str[lenth] != '\0') lenth++;

	for (i = lenth-1; i >=lenth-num; i--) {
		printf("%c", str[i]);
	}
	printf("\n");


}