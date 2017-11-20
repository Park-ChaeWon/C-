#include <stdio.h>
int main(void) {
	int virus[3] = { 0 };
	int i, backsin;
	for (i = 0; i < 3; i++) scanf("%d", &virus[i]);
	
	for (i = 1 ; i <= virus[0]; i++) 
		if (virus[0] % i == 0 && virus[1] % i== 0 && virus[2] % i == 0) backsin = i;
	
	printf("%d\n", backsin);
}