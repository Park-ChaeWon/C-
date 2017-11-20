#include <Stdio.h>
void II(int aList[]) {
	int i = 0;
	for (i = 0; i < 5; i++) 
		scanf("%d", &aList[i]);
}
void SL(int aList[]) {
	int i = 0, j = 0, nt = 0;
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (aList[j] < aList[i]) {
				nt = aList[j];
				aList[j] = aList[i];
				aList[i] = nt;
			}
		}
	}
}
void PL(int aList[]) {
	int i = 0;
	for (i = 0; i < 5; i++)
		printf("%d\t", aList[i]);
	putchar('\n');

}
int main(void) {
	int aList[5] = {0};
	II(aList);
	SL(aList);
	PL(aList);
}
