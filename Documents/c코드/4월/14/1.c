#include <stdio.h>
int main(void) {
	int date;
	printf("��¥�� �Է��ϼ��� : "); scanf("%d", &date);
	
	switch ((date - 1) / 7){
	case 0: printf("ù°��\n"); break;
	case 1: printf("��°��\n"); break;
	case 2: printf("��°��\n"); break;
	case 3: printf("��°��\n"); break;
	case 4: printf("�ټ�°��\n"); break;
	default: printf("�߸� �Է��Ͽ����ϴ�.\n"); break;
	}

}