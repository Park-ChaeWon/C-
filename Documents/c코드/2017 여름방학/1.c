#include <Stdio.h>
int main(void){
	int people[3][3];
	int i,j;
	int sum[3]={0};
	double avg[3];
	
	for(i=0;i<3;i++)
		scanf("%d %d %d",&people[i][0], &people[i][1], &people[i][2]);
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum[i]+=people[i][j];
		}
	}
	
	for(i=0;i<3;i++)
		avg[i]=sum[i]/3.0;
	
	for(i=0;i<3;i++){
		printf("�л� %d, ����%d��, ����%d��, ����%d�� ���� : %d, ��� :  %lf\n",
				i+1,people[i][0], people[i][1], people[i][2],sum[i],avg);
		if(avg[i]>60) printf("�հ�\n\n");
		else printf("���հ�\n"); 
	}
}
