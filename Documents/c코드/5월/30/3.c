#include <Stdio.h>
struct data {
	char name[20];
	int eng, math;
};
int main(void) {
	struct data peo1;
	struct data peo2;
	scanf("%s %d %d", &peo1.name, &peo1.eng, &peo1.math);
	scanf("%s %d %d", &peo2.name, &peo2.eng, &peo2.math);

	printf("%s ЦђБе : %d\n",peo1.name, (peo1.eng + peo1.math) / 2);
	printf("%s ЦђБе : %d\n",peo2.name, (peo2.eng + peo2.math) / 2);
}