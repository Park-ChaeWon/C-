#include <Stdio.h>
struct profile{
	int age;
	double height;
	char *np;
};
struct student {
	struct profile pf;
	int num;
	double grade;
};
int main(void) {
	struct student s1;
	s1.pf.age = 17;
	s1.pf.height = 172;
	s1.pf.np = "��ä��";
	s1.num = 6;
	s1.grade = 90.1;

	struct student *p1 = &s1;
	// (*p1).age == p1 -> age

	// ���� �������� ��� �⺣�� ������ �� �ִ�.
	// struct profile pf = { 23,183,"ȫ�浿" }; ���� �ʱ�ȭ �ص� ������
	
	printf("�̸� : %s \n", s1.pf.np);
	printf("���� : %d\n", s1.pf.age);
	printf("Ű : %.lf\n", s1.pf.height);
	printf("�й� : %d\n", s1.num);
	printf("���� : %.2lf\n", s1.grade);

}