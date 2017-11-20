#include <Stdio.h>
int g_nC = 0;
void Init(int data) {
	g_nC = data;
}
void Incr() {
	g_nC++;
}
int main(void) {
	Init(10);
	printf("%d\t", g_nC);
	Incr();
	printf("%d\t", g_nC);
	Incr();
	printf("%d\t", g_nC);

}