#include <stdio.h>
int main(void) {
	/* int i=0,j=0;
	while (i < 6) {
		
		while (j < i) {
			printf(" ");
			++j;
		}
		j = 6;
		while (j > i) {
			printf("*");
			--j;
		}
		printf("\n");
		i++;
		j = 0;
	} */
	int i = 0, j;
	while (i < 6) {
		j = 0;
		while (j < 6) {
			if (i > j) printf(" ");
			else printf("*");
			j++;
		}
		i++;
		printf("\n");
	}


	return 0;
}
/*
#include <stdio.h>
int main() {
int j;
for (int i = 0; i<6; i++) {
for (j = 0; j<i; j++) {
printf(" ");
}
for (j = 6; j>i; j--) {
printf("*");
}
printf("\n");
}
}
*/
