#include <stdio.h>
#define WORD "love"
int main(void){
	int a, len = 0;
	char os[]=WORD, ts[]=WORD;
	while(os[len]) len++;
	for(a=0;a<len;a++)
		ts[a] = os[len-a-1];
		
	printf("원래 단어 : %s\n", os);
	printf("뒤집힌 단어 : %s\n", ts);
}
