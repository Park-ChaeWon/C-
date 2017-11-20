#include <Stdio.h>
#include <windows.h>
int main() {
	int num,i;
	while (1) {

		printf("숫자 입력 : "); scanf("%d", &num);


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