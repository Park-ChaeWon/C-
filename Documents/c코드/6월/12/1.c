#include <stdio.h>
int main(void) {
	FILE *fp = fopen("me.txt","w");
	
	fputs("�б� : �������Ʈ����̽��Ͱ�\n", fp);
	fputs("�� : 1�г� 3��\n", fp);
	fputs("��ȣ : 6��\n", fp);
	fputs("�̸� : ��ä��\n", fp);
	
	fclose(fp);
	return 0;
}