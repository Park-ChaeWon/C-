#include <stdio.h>
void Swap(char **a, char **b) {
	char *swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
int main(void) {
	char* pa = "success";
	char* pb = "failure";
	printf("%s %s\n", pa, pb);
	Swap(&pa, &pb);
	printf("%s %s\n", pa, pb);
}