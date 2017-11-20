#include <stdio.h>
int main(void) {
	int DNA = 0;
	int i, data = 0;
		
	printf("용의자의 DNA 정보를 입력하세요\n");
	for (i = 0; i < 3; i++) {
		scanf("%d", &DNA);
		while (DNA != 0) {
			data += DNA % 10;
			DNA /= 10;
		}
		if ((data % 7) == 4) printf("범인\n\n");
		else printf("일반인\n\n");
	}

	

}