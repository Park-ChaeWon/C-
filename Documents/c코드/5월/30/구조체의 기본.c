#include <Stdio.h>
struct student { //student 구조체 명
	int num; //멤버
	double grade;
}; //세미콜론 꼭 붙이기!
int main(void) {
	struct student s1;
	s1.num = 2;  // 여기서 '.'은 멤머 참조 연산자임
	s1.grade = 2.7;
	printf("학번 : %d\n", s1.num);
	printf("점수 : %.1lf\n", s1.grade);
}