#include <stdio.h>
int main(void){
	int arr[100][100]={0};
	int n, r, c, sum=0, i=1; //r ��, c �� 
	printf("�迭 ũ�� ����(�ִ�100) : "); scanf("%d",&n);
	//�Է� 
	for(r=0;r<n;r++){
		for(c=0;c<n;c++){
			arr[r][c] = i++;
		}
	} 
	
	//���ϱ� 
	int t=n-1;
	for(r=0;r<n;r++){
		for(c=n-1;c>=0;c--){
			if(c<t) continue;
			if((n-r-1) == c) continue;
			else 
				arr[r][n-r-1] += arr[r][c];
		} 
		t-=1;
	}

	//��� 
	for(r=0;r<n;r++){
		for(c=0;c<n;c++)
			printf("%3d ", arr[r][c]);
		printf("\n");
	} 
} 
