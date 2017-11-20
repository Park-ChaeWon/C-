#include <Stdio.h>
int main(void) {
	int i, j;
	char alp;
	int count[26] = { 0 };
	while (1) {
		scanf("%c", &alp);
		if (alp < 'A' && alp>'Z') break;
		else count[alp - 'A']++;
	}
	for (i = 0; i < 26; i++) {
		if (count[i] > 0) printf("%c : %d\n", i + 65, count[i]);
	}
}