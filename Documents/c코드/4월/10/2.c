#include <stdio.h>
int main(void) {
	int height[3] = { 0 };
	int width[3] = { 0 };
	int wide[3] = { 0 };
	for (int i = 0; i < 3; i++) {
		printf("가로, 세로 입력 : ");
		scanf("%d %d", &width[i], &height[i]);
		if (width[i] > 1000) continue;
		wide[i] = width[i] * height[i];
	}
/*
	if (wide[0] > wide[1]) {
		if (wide[0] > wide[2]) printf("%d\n", wide[0]);
		else printf("%d\n", wide[2]);
	}
	
	else {
		if (wide[1] > wide[2]) printf("%d\n", wide[1]);
		else printf("%d\n", wide[2]);
	}
	*/
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (wide[j] < wide[j + 1]) {
				int temp = wide[j];
				wide[j] = wide[j + 1];
				wide[j + 1] = temp;
			}
		}
	}
	printf("%d\n", wide[0]);
}