#include <Stdio.h>
int main(void) {
	char code[22] = { 0 };
	int i;
	printf("�ڵ带 �Է��ϼ��� : "); scanf("%s", code);
	for (i = 0; code[i]!=0; i++) printf("%c", code[i] + 2); 
	printf("\n");
	for (i = 0; i <code[i]!=0; i++)  printf("%c", (code[i]*7)%80+48);
	printf("\n");


}