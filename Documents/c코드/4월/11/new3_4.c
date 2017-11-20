#include <stdio.h>
int main(void) {
	int num,head=1,mid=1,rear=1;
	scanf("%d", &num);
	for (int i = 1; i <= num;i++ ) {
		printf("%d ", head);
		rear = head + mid;
		head = mid;
		mid = rear;
	}
}