#include <stdio.h>
//�� �Ųٷ� ����ϱ�
int main(void){
	int num,a,i=1;
	printf("���� �Է��ϼ��� : "); scanf("%d", &num);
	printf("%d => ", num);
	while (num!=0) {
		printf("%d", num % 10);
		num /= 10;
}
	puts(" ");

}