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
	
	int r2 =n-1, c2 = 0;
	for(c=0;c<n;c++){
		for(r=n-1;r>=n-1;r--){
			if(r2==r && c2==c ) continue;
			arr[r2][c2]+=arr[c][r];
		}
		r2--;
		c2++;
	}

	//��� 
	for(r=0;r<n;r++){
		for(c=0;c<n;c++)
			printf("%3d ", arr[r][c]);
		printf("\n");
	} 
} 
