//오류 있음 underflow가 뜨는 동시에 이상한 값이 채워짐
#include <Stdio.h>
#define SIZE 10

int top = -1;
int Stack[SIZE];
int output[SIZE*SIZE];
int out = 0;

int push(int item) { //-> int item = price; , push 
	if (top >= SIZE - 1) {
		printf("overflow\n\n");
		return;
	}
	else
		Stack[++top] = item;
}

int pop() { //pop
	if (top < 0) printf("\nunderflow\n\n");
	else {
		return Stack[top--];
	}
}
void stackprintf() {
	int i;
	printf("\n STACK [ ");
	for (i = 0; i <= top; i++) printf("%d ", Stack[i]);
	printf("]\n");
	printf("\n output is : ");
	for (i = 0; i < out; i++) printf("%d ", output[i]);
}

int main(void) {
	printf("=============================\n");
	printf("    please insert value as you want to push to stack\n");
	printf("    pop is 9999\n");
	printf("    if you push 8888, program was shut\n");
	printf("    jjing guet\n");
	printf("=============================\n");

	int item;
	stackprintf();
	while (1) {
		printf("\n input is : ");
		scanf("%d", &item);
		if (item != 9999 && item != 8888) {
			push(item);
			stackprintf();
		}
		if (item == 8888) break;
		if (item == 9999) {
			output[out++] = pop();
			stackprintf();
		}
	}
}