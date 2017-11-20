#include <Stdio.h>
struct data {
	char name[20];
	double he;
	double we;
};
void input(struct data stu[]) {
	int i;
	for (i = 0; i < 5; i++)
		scanf("%s %lf %lf", stu[i].name, &stu[i].he, &stu[i].we);
}
void sort(struct data stu[]) {
	int i, j;
	struct data tmp;
	for (i = 0; i <4; i++) {
		for (j = 0; j <5-i-1; j++) {
			if (stu[j].he >stu[j + 1].he) {
				tmp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = tmp;
			}
		}
	}
}
void output(struct data stu[]) {
	int i;
	printf("===================\n\n");
	for (i = 0; i < 5; i++)
		printf("%s %.lf %.lf\n\n", stu[i].name, stu[i].he, stu[i].we);
}
int main(void) {
	struct data stu[5];
	input(stu);
	sort(stu);
	output(stu);
}