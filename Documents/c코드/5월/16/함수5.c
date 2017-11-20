#include <stdio.h>
int Count() {
	int howmany = 0;
	printf("입력받을 수의 개수(10개 이하) : ");
	scanf("%d", &howmany);

	return howmany;
}
int GetData(int count,int aList[]) {
	for (int i = 0; i < count; i++)
		scanf("%d", &aList[i]);
}
void list(int count) {
	int aList[10] = { 0 };
	GetData(count,aList);

	int tmp = 0;
	for (int i = 0; i < count; i++) {
		for (int j = i + 1; j < count + 1; j++) {
			if (aList[i] < aList[j]) {
				tmp = aList[i];
				aList[i] = aList[j];
				aList[j] = tmp;
			}
		}
	}
	for (int i = 0; i < count; i++) printf("%d ", aList[i]);
	putchar('\n');
}

int main(void) {
	list(Count());
}