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
		printf("학생 %d, 영어%d점, 수학%d점, 국어%d점 총점 : %d, 평균 :  %lf\n",
				i+1,people[i][0], people[i][1], people[i][2],sum[i],avg);
		if(avg[i]>60) printf("합격\n\n");
		else printf("불합격\n"); 
	}
}
