#include <Stdio.h>
// 1 2 3 4 5
void Name(int n) {
	if (n < 1)
		return;
	Name(n - 1);
	printf("%d\n",n);
}
void main() {
	Name(5);
}
/*
//5 4 3 2 1
#include <Stdio.h>
void Name(int n) {
if (n < 1)
return;
printf("%d\n",n);
Name(n - 1);

}
void main() {
Name(5);
}
*/