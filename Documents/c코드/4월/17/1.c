#include <Stdio.h>
int main() {
	char ch = 0;
	while ((ch = getchar()) != '\n') {
		putchar(ch);
	}
}