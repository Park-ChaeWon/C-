#include <Stdio.h>
#include <windows.h>
int main() {
	int num,i;
	while (1) {

		printf("���� �Է� : "); scanf("%d", &num);


		if (num > 0 && num < 10) {
			for (i = 0; i < num; i++)  printf("*");
		}

		else {
			if (num < 0) printf("*");
			else
				for (i = 0; i < 10; i++) printf("*");
		}
		_getch();
		system("cls");
	}
		
		

}