#include <Stdio.h>
int GetData() {
	int num = 0;
	printf("값을 입력하세요 : "); scanf("%d", &num);
	return num;
}
int GetMax(int a,int b, int c) {
	int Max;
	Max = a;
	if (Max < b) {
		Max = b;
		if (Max < c) Max = c;
	}
	return Max;
}
void PrintData(int a, int b, int c, int Max) {
	printf("%d, %d, %d 중 가장 큰 수는 %d입니다.\n", a, b, c, Max);
}
int main(void) {
	int aList[3] = { 0 };
	int nMax, i = 0;
	for (int i = 0; i < 3; i++)
		aList[i] = GetData();

	nMax = GetMax(aList[0], aList[1], aList[2]);
	PrintData(aList[0], aList[1], aList[2], nMax);


}
