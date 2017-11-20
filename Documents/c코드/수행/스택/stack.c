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
		printf("\npop�� �� : %d\n\n", Stack[top]);
		Stack[top--] = NULL; //top�� ���� �����ְ� ���� �ٿ��� top�� 1 �ٿ���
	}
}
void look() { //push�� ���� ���� ���� ��
	int i;
	printf("\n"); // ��½� ���� ������� �س��� �� ���Դϴ�.
	for (i = 0; i < top+1; i++) { // push�� �� �̿��� ���� ���� �ʱ� ���ؼ� top+1���� �۰Է� ������ �־����ϴ�.
		printf("%d ", Stack[i]);
	}
	puts("\n"); //���� ������� �س��ҽ��ϴ�. 
}

int main() {
	int price = 0; // switch���� �����鼭 push�� ���� �Է��ϰų� ����, pop��Ű�� ����
	while (1) {
		printf("=========================================\n");
		printf("push�� �� �Է� (��, 9999�̸� pop, 8888�̸� ����) : ");
		scanf("%d", &price);
		switch (price) {
		case 9999: //pop
			pop();
			break;
		case 8888: //���� 
			printf("����\n");
			return 0; //return 0���� ���� look�Լ��� ������� �ʰ� ����
		default:
			push(price);
		}
		look();
	}
}