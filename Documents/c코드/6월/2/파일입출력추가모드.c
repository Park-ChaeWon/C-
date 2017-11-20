#include <Stdio.h>
int main(void) {
	FILE* fp3 = fopen("out3.txt", "a");
	fprintf(fp3, "hello!\n");
	fclose(fp3);
}