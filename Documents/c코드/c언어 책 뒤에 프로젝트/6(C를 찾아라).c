#include <stdio.h>

int main(void) {
	char sentence[101];
	int i = 0;
	int cnt_C = 0, cnt_cc = 0;
	printf("100�� �̳��� ���ڿ��� �Է��Ͻÿ� : ");
	scanf("%s", sentence);

	for(i=0 ; sentence[i]!='\0' ; i++) {
		if (sentence[i] == 'c' || sentence[i] == 'C') {
			cnt_C++;
			if (sentence[i + 1] == 'c' || sentence[i + 1] == 'C') {
				cnt_cc++;
			}
		}
	}
	printf("C�� ������ : %d\n", cnt_C);
	printf("CC�� ������: %d\n", cnt_cc);

}

