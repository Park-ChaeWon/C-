#include <Stdio.h>
#include <stdlib.h>
typedef struct Test {
	int length;
	int age;
	int score;
	char gender;
	char hometown;
	char blood;
	int birth;
	int id_number;
}test;
int main(void) {
	test KHG;
	test SSG;
	test OIS;
	test JDE;
	test SJH;

	KHG.age = 20;
	KHG.score = 91;
	KHG.gender = 'M';
	SSG.age = 80;
	SSG.score = 56;
	SSG.gender = 'M';
	OIS.age = 17;
	OIS.score = 89;
	OIS.gender = 'M';
	JDE.age = 17;
	JDE.score = 86;
	JDE.gender = 'W';
	SJH.age = 19;
	SJH.score = 70;
	SJH.gender = 'M';

	char name[20]={0};
	scanf("%s", &name);

	if (name == "KHG") {
		printf("���� : %d, ���� :  %d, �� : %c\n", KHG.age, KHG.score, KHG.gender);
	}
	else if (name == "SSG") {
		printf("���� : %d, ���� :  %d, �� : %c\n", SSG.age, SSG.score, SSG.gender);
	}
	else if (name == "OIS") {
		printf("���� : %d, ���� :  %d, �� : %c\n", OIS.age, OIS.score, OIS.gender);
	}
	else if (name == "JDE") {
		printf("���� : %d, ���� :  %d, �� : %c\n", JDE.age, JDE.score, JDE.gender);
	}
	else if (name == "SJH") {
		printf("���� : %d, ���� :  %d, �� : %c\n", SJH.age, SJH.score, SJH.gender);
	}
	else printf("�׷� ����� �����ϴ�.\n");
	
}