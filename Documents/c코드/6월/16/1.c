#include <stdio.h>
typedef struct data {
	char name[20];
	int math;
}DATA;
int main(void) {
	DATA list[5];
	DATA tmp;
	int i, j;
	FILE* fp1 = fopen("in.txt", "r");
	FILE* fp2 = fopen("out.txt", "w");
	for(i=0;i<5;i++)
	fscanf(fp1, "%s %d", list[i].name, &list[i].math);

	for (i = 0; i < 4; i++) {
		for (j = i+1; j < 5; j++) {
			if (list[i].math < list[j].math) {
				tmp = list[i];
				list[i] = list[j];
				list[j] = tmp;
			}
		}
	}

	for (i = 0; i < 5; i++)
		fprintf(fp2, "%s %d\n", list[i].name, list[i].math);

	fclose(fp1);
}