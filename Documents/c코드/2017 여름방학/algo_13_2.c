#include <stdio.h>
#include <windows.h>
int main(void){
	int a=0, b=0;
	int big, small, nmg, gcd, lcm;
	
	scanf("%d%d", &a, &b);
	big = (a>b) ? a : b;
	small = (a>b) ? b : a;
	
	while(1){
		nmg = big % small;
		if(nmg==0){
			gcd = small;
			lcm = a*b / gcd;
			printf("�� �ִ����� : %d\n"
				   "�� �ּҰ���� : %d\n", gcd, lcm);
			break;
		}
		else {
			big = small;
			small = nmg;
		}
	}
}
