#include <stdio.h>
 
int main()
{
	int ary[100][100];
	int n, z, i, j, x=0, y=-1, turn=1;
	int num=1;
	 
	printf("�����Է� : ");
	scanf("%d %d",&n, &z);
	
	while(z!=0)
	{
		for(i=0; i<z; i++)
		{
			y+=turn;
			ary[x][y]=num;
			num++;
		}
		z--;
		for(i=0; i<z; i++)
		{
			x+=turn;
			ary[x][y]=num;
			num++;
		}
			turn*=-1;
	}
	 
	for(i=0; i<n; i++){
		for(j=0; j<n;j++){
			printf("%5d",ary[i][j]);
		}
		printf("\n");
	}
 
return 0;
}
