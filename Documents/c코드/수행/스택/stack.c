#include <Stdio.h>
#define SIZE 10

int top = -1;
int Stack[SIZE];

void push(int item) { //-> int item = price; , push 
	if (top >= SIZE - 1) { 
		printf("overflow\n\n");
		return;
	}
	else 
		Stack[++top] = item;
}

void pop() { //pop
	if (top < 0) printf("\nunderflow\n\n");
	else {
		printf("\npop된 값 : %d\n\n", Stack[top]);
		Stack[top--] = NULL; //top의 값을 지워주고 다음 줄에서 top을 1 줄여줌
	}
}
void look() { //push된 값을 보기 위한 것
	int i;
	printf("\n"); // 출력시 보기 좋으라고 해놓은 것 뿐입니다.
	for (i = 0; i < top+1; i++) { // push된 값 이외의 것을 보지 않기 위해서 top+1보다 작게로 설정해 주었습니다.
		printf("%d ", Stack[i]);
	}
	puts("\n"); //보기 좋으라고 해놓았습니다. 
}

int main() {
	int price = 0; // switch문을 돌리면서 push에 값을 입력하거나 종료, pop시키는 변수
	while (1) {
		printf("=========================================\n");
		printf("push할 값 입력 (단, 9999이면 pop, 8888이면 종료) : ");
		scanf("%d", &price);
		switch (price) {
		case 9999: //pop
			pop();
			break;
		case 8888: //종료 
			printf("종료\n");
			return 0; //return 0으로 밑의 look함수를 출력하지 않고 종료
		default:
			push(price);
		}
		look();
	}
}