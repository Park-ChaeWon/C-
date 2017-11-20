#include <Stdio.h>
int main() {
	int age;
	char wm;
	printf("성별(F/M) 입력 : "); scanf("%c", &wm);
	printf("나이 입력 : "); scanf("%d", &age);
	if (age < 20) {
		printf("미성년 ");
		if (wm == 'F') printf("여자입니다. \n");
		else printf("남자입니다. \n");
	}
	else {
		printf("성인 ");
		if (wm == 'F') printf("여자입니다. \n");
		else printf("남자입니다. \n");

	}
}