#include <stdio.h>
int main(void) {
	char word[10][20] = { "pen","pencil","class","book","lion","lesson","tel","champion","information","computer" };
	char word2[10][20];
	char alpha=0;
	int i,j=0;

    scanf("%c", &alpha);
	
	for (i = 0; i < 10; i++) {
			if (word[i][0] == alpha) {
				printf("%s\n", word[i]);
				j++;
		    } //end if
    }
	if (j==0) printf("찾는 단어가 없습니다.\n");
	
}