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
	arr[n-1][n-1]=0;
	for(r=0;r<n;r++){
		for(c=0;c<n;c++){
			if(r==(n-1) && c== (n-1)) break;
			if(r==c) arr[n-1][n-1] += arr[r][c];
		} 
	}
	/*
	//���ϱ� 
	sum = 0;
	for(r=0;r<n;r++){
	sum+=m[r][r]
	}
	*/
	
	//��� 
	for(r=0;r<n;r++){
		for(c=0;c<n;c++)
			printf("%3d ", arr[r][c]);
		printf("\n");
	} 
} 
