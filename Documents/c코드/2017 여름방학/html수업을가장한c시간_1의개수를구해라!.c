#include <stdio.h>
void f(int a, int k, int cnt){
	int c = 0;
	while(a>=10){
	
	if(a/cnt == k) c++;
	
	a%=10;
	cnt /= 10;
	
	}
	c++;
	printf("%d\n", c);
}
int main(void){
	int a, b, k, cnt=0, h;
	printf("찾기 시작할 수 | 찾는걸 끝낼 수 | 찾을 수 :  ");
	scanf("%d %d %d", &a, &b, &k);
	int i;
	h=k;
	while(h==0){
		h/=10;
		cnt++;
	}
	for(i=a; i<=b; i++)
		f(i, k, cnt);
	//printf("%d\n", cnt);
}

