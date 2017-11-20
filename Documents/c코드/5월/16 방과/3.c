#include <Stdio.h>
int main(void) {
	double average[6] = { 0 };
	int select[2] = { 0 };
	int i = 0;
	double result = 0;

    for (i = 0; i < 6; i++)
		scanf("%lf", &average[i]);
	
	printf("µÎ ¹Ý : "); scanf("%d %d", &select[0], &select[1]);

	result = (average[select[0]] + average[select[1]]);
	printf("%.2lf\n", result);


}