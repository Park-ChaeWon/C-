#include <stdio.h>
int main(void) {
	int num[10];
	int even_num[10] = { 0 };
	int odd_num[10] = { 0 };
	int max = 0, min = 0;
	int i = 0, j = 0, k = 0 ;

	for (i = 0; i < 10; i++)
		scanf("%d", &num[i]);
	
	for (i = 0; i < 10; i++) { //¦�� Ȧ�� ������
		if (num[i] % 2 == 0)
			even_num[j++] = num[i];

		else
			odd_num[k++] = num[i];
	}

	for (i = 0; i < j - 2; i++) { //���� ū ¦�� ���ϱ�
		if (max < even_num[i]) max = even_num[i];
}
	
	for (i = 0; i < k - 2; i++) { //���� ���� Ȧ�� ���ϱ�
		if (min > odd_num[i]) min = odd_num[i];
	}
	printf("¦�� �� ���� ū �� : %d\n", max);
	printf("Ȧ�� �� ���� ���� �� : %d\n", min);

}