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
	for(r=0;r<n;r++){
		for(c=0;c<n;c++){
			if(r<=c) continue;
			arr[r][r]+=arr[r][c];
		} 
	}

	//��� 
	for(r=0;r<n;r++){
		for(c=0;c<n;c++)
			printf("%3d ", arr[r][c]);
		printf("\n");
	} 
} 
