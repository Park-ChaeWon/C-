#include <Stdio.h>
int main() {
	int age;
	char wm;
	printf("����(F/M) �Է� : "); scanf("%c", &wm);
	printf("���� �Է� : "); scanf("%d", &age);
	if (age < 20) {
		printf("�̼��� ");
		if (wm == 'F') printf("�����Դϴ�. \n");
		else printf("�����Դϴ�. \n");
	}
	else {
		printf("���� ");
		if (wm == 'F') printf("�����Դϴ�. \n");
		else printf("�����Դϴ�. \n");

	}
}