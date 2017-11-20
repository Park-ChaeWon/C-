#include <stdio.h>
int D(int dou) {
	if (dou <= 10) {
		if (dou == 0)
			return 1;

		return 3 * D(dou - 1);
	}
	else {
		printf("10이하의 수를 입력하세요.\n");
		return 0;
	}

}
int Num() {
	int a=0;
	scanf("%d", &a);
	return a;
}

int main(void) {
		printf("%d\n",D(Num()) );
}