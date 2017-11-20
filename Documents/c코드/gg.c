#include<stdio.h>
int main()
{
  int maze[11][11]={0};
  int x,y,i,j;
  for(i=0;i<10;i++){
  	for(j=0;j<10;j++){
  		scanf("%d",&maze[i][j]);
	    }
	}
	
	i=1, j=1;
while(1){
		maze[i][j]=9;
  		if(maze[i][j+1]==2) break;
  		if(i==8 && j==8) {
  			maze[i][j]=9;
  			break;
		  }
		if(maze[i][j+1]==1){
			maze[++i][j]=9;
			
		}
			if(maze[i][j+1]!=1){
			maze[i][++j]=9;
		}
		if(maze[i][j+1]==1&&maze[i+1][j]==2)
		{
			maze[++i][j]=9;
			break;
		}
  	
  	}
	printf("\n");
	for(i=0;i<10;i++){
	  	for(j=0;j<10;j++)
	  		printf("%d ",maze[i][j]);
		printf("\n");
	}
}





