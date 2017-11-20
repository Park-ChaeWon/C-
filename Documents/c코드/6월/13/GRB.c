#include <stdio.h>
#define WIDTH 1024
#define HEIGHT 768
#define HEADER 54
unsigned char R[HEIGHT][WIDTH], G[HEIGHT][WIDTH], B[HEIGHT][WIDTH];
int main(void) {
	FILE *f1 = fopen("free.bmp", "rb");
	FILE *f2 = fopen("freecopy2.bmp", "wb");
	int i, j;
	for (i = 0; i < HEADER; i++) putc(getc(f1), f2);
	for (i = 0; i < HEIGHT; i++) {
		for (j = 0; j < WIDTH; j++) {
			G[i][j] = getc(f1);
			R[i][j] = getc(f1);
			B[i][j] = getc(f1);
		}
	}
	for (i = 0; i < HEIGHT; i++) {
		for (j = 0; j < WIDTH; j++) {
			putc(G[i][j], f2);
			putc(R[i][j], f2);
			putc(B[i][j], f2);
		}
	}
	return 0;
}