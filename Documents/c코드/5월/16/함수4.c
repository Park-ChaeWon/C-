#include <Stdio.h>
void GD(int aList[]) {
	for (int i = 0; i < 4; i++)
		scanf("%d", &aList[i]);
}
int Min(int aList[]) {
	int i = 0, j = 0, tmp = 0;
	int min = aList[0];
	for (i = 1; i < 3; i++) {
		if(min>aList[i]){
			tmp = min;
			min = aList[i];
			aList[i] = tmp;
		}
	}
	return min;
}
int main(void) {
	int aList[4] = { 0 };
	GD(aList);
	printf("ÃÖ¼Ú°ª : %d\n", Min(aList));
}