#include <stdio.h>
int main(void) {
	FILE *file;
	
	file = fopen("text.txt", "w");
	// "w"�Ӽ��� ���� �Ӽ����� �ؽ�Ʈ ������ ��� ������ �������� ó������ ���ڸ� ���� ��

	printf("%c", fputc('C', file)); 
	// ���ڸ� ������ ��Ʈ�� ���� ���� �� ��ġ �����ڰ� ����Ű�� �κп� ���ڸ� ���� ��
	// ���� ���Ⱑ �Ϸ� �Ǹ� ��Ʈ�� ������ ��ġ�������� ��ġ�� �ϳ��� �ø���.
	printf("%c", fputc('l', file));
	printf("%c", fputc('a', file));
	printf("%c", fputc('s', file));
	printf("%c\n", fputc('s', file));
	//��Ʈ�� ���� ���ۿ� �� �������� �ؽ�Ʈ ���Ͽ� ��Ʈ�� ���Ͽ� �ִ� ���ڵ��� ���� ��

	fclose(file);
}