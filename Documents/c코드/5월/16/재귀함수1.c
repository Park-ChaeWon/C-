#include <Stdio.h>
int n_Sum(int num) {
	if (num <= 100) {
		if (num == 1)
			return 1;

		return num + n_Sum(num);
	}
	else {
		printf("100������ ���� �Է��ϼ���.\n");
		return 0;
	}
}


int main(void) {
	int a=0;
	printf("a�� �Է��ϼ��� : ");
	scanf("%d", &a);

	printf("%d\n", n_Sum(a));
}