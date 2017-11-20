#include <stdio.h>
#include <string.h>
 //포인터 
int main(void){
/*
	int a = 10;
	int *ptr;
	ptr = &a;
	
	printf("%x\n", ptr);
	printf("%x\n", &ptr);
	printf("%d\n", *ptr);
*/

/*
	int a = 10;
	int *ptr = &a;
	
	printf("ptr의 주소값 : %x\n", &ptr);
	printf("  a의 주소값 : %x\n", &a);
	printf("  a의 주소값 : %x\n", ptr);
	
	printf("      a의 값 : %d\n", a);
	printf("      a의 값 : %d\n", *ptr);
*/
	
/*	
	//배열과  포인터 
	int ar[]={10, 20, 30};
	int *p = ar;
	
	printf(" *(p+0) : %d  |  p+0 : %x %x\n", *(p+0), ar, p);
	printf(" *(p+1) : %d  |  p+1 : %x %x\n", *(p+1), ar+1, p+1);
	printf(" *(p+2) : %d  |  p+2 : %x %x\n", *(p+2), ar+2, p+2);
*/
	
	//포인터 배열 전달
	int a;
	char *week[7] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
	
	for(a=0;a<7;a++){
		printf("%d	", *(&week[a]));
		printf("%-10s 문자열의 크기는 %d\n", week[a], strlen(week[a]));
	}	
 
}
