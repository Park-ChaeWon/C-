#include <stdio.h>
int main(void) {
	int DNA = 0;
	int i, data = 0;
		
	printf("�������� DNA ������ �Է��ϼ���\n");
	for (i = 0; i < 3; i++) {
		scanf("%d", &DNA);
		while (DNA != 0) {
			data += DNA % 10;
			DNA /= 10;
		}
		if ((data % 7) == 4) printf("����\n\n");
		else printf("�Ϲ���\n\n");
	}

	

}