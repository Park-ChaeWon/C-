#include <stdio.h>
int main(void){
	int k=0, n=1, h=1;
	while(k<9){
		k++;
		n+=k;
		h+=n;
	}
	printf("%d\n",h);
}
