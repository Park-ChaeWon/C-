#include <stdio.h>

int main(void) {
	char sentence[101];
	int i = 0;
	int cnt_C = 0, cnt_cc = 0;
	printf("100자 이내의 문자열을 입력하시오 : ");
	scanf("%s", sentence);

	for(i=0 ; sentence[i]!='\0' ; i++) {
		if (sentence[i] == 'c' || sentence[i] == 'C') {
			cnt_C++;
			if (sentence[i + 1] == 'c' || sentence[i + 1] == 'C') {
				cnt_cc++;
			}
		}
	}
	printf("C의 갯수는 : %d\n", cnt_C);
	printf("CC의 갯수는: %d\n", cnt_cc);

}

