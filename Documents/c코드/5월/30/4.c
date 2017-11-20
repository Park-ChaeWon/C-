#include <Stdio.h>
struct vision {
	double left, right;
};
void exchange(struct vision peo ) {
	struct vision tmp;
	tmp.right = peo.left;
	peo.left = peo.right;
	peo.right = tmp.right;

	printf("¹Ù²Û ½Ã·Â : %.1lf %.1lf\n", peo.left, peo.right);
}
int main(void) {
	struct vision people;
	scanf("%lf %lf", &people.left, &people.right);

	exchange(people);
}