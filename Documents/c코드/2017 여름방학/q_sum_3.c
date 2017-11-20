#include <stdio.h>
int main(void){
	int arr[100][100]={0};
	int n, r, c, sum=0, i=1; //r 행, c 열 
	printf("배열 크기 설정(최대100) : "); scanf("%d",&n);
	//입력 
	for(r=0;r<n;r++){
		for(c=0;c<n;c++){
			arr[r][c] = i++;
		}
	} 
	
	//더하기 
	for(r=0;r<n;r++){
		for(c=0;c<n;c++){
			if(r<=c) continue;
			arr[r][r]+=arr[r][c];
		} 
	}

	//출력 
	for(r=0;r<n;r++){
		for(c=0;c<n;c++)
			printf("%3d ", arr[r][c]);
		printf("\n");
	} 
} 
