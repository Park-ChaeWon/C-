#include <stdio.h>
int GCD(int a, int b){ //최대공약수 
	int gcd = 0;
	int i, j;
	 j = (a<b) ? a:b;
	 
	 for(i=1; i<=j; i++){
	 	if(a%i==0 && b%i==0)
	 		gcd = i;
	 }
	 return gcd;
}

int LCM(int a, int b){ //최소공배수 
	int i, j;
	int lcm;
	
	j = (a>b) ? a:b;
	
	for(i=j ; ; i++){
		if(i%a==0 && i%b==0){
			lcm = i;
			break;
		}
	}
	return lcm;
}

int main(void){
	int a=0, b=0, result;
	scanf("%d %d",&a, &b);

	printf("=================================\n");
	printf("최대공약수 : %3d\n", GCD(a,b));
	printf("=================================\n");
	printf("\n=================================\n");
	printf("최소공배수 : %3d\n", LCM(a,b));
	printf("=================================\n");
	
}

