#include <Stdio.h>
int main(void) {
	int num,i,total=1;
	printf("���� �Է� : "); scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		total*=i;
	}
	printf("%d! = %d\n", num,total);
}