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
	s1.pf.np = "박채원";
	s1.num = 6;
	s1.grade = 90.1;

	struct student *p1 = &s1;
	// (*p1).age == p1 -> age

	// 대입 연산으로 모든 멤베를 복사할 수 있다.
	// struct profile pf = { 23,183,"홍길동" }; 으로 초기화 해도 괜찮음
	
	printf("이름 : %s \n", s1.pf.np);
	printf("나이 : %d\n", s1.pf.age);
	printf("키 : %.lf\n", s1.pf.height);
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.2lf\n", s1.grade);

}