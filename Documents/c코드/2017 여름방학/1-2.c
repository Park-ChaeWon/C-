#include <stdio.h>
#include <stdlib.h>
 
 //����ü ����
int main(void){
	
	/*	int kor[5], eng[5], math[5], total[5]={0}, rank[5], num[5];
	double avg[5];
	char name[5][20];  */
	
	struct stu{
		int num;
		char name[10];
		int kor;
		int eng;
		int math;
		int total;
		int rank; 
		double avg;
	};
	struct stu people[5];
	struct stu tmp;
	int i, j;	
													
	FILE *read=fopen("input.txt","r");
	FILE *out = fopen("output.txt","w");
	 
	//�Է� 
	for(i=0;i<5;i++){ 
		fscanf(read, "%d %s %d %d %d",&people[i].num, &people[i].name, &people[i].kor, &people[i].eng, &people[i].math);
		people[i].total=people[i].kor+people[i].eng+people[i].math;
		people[i].avg=people[i].total/3.0;
	}
	
	//���� ���� ���ϱ� 
	for(i=0;i<5;i++){
		int cnt = 1;
		for(j=0;j<5;j++){
			if(people[i].total<people[j].total) cnt++;
		}
		people[i].rank=cnt;
	}
	
	//swap
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(people[i].rank>people[j].rank){
				tmp=people[i];
				people[i]=people[j];
				people[j]=tmp;
			}
		}
	}
	
	//��� 
	for(i=0;i<5;i++){
		printf("%2d�� %5s | ����%4d | ����%4d | ����%4d | ����%4d | ���%8.3lf | %2d��\n", 
				people[i].num, people[i].name, people[i].kor, people[i].eng, people[i].math, people[i].total, people[i].avg, people[i].rank);
		fprintf(out, "%2d�� %5s | ����%4d | ����%4d | ����%4d | ����%4d | ���%8.3lf | %2d��\n", 
				people[i].num, people[i].name, people[i].kor, people[i].eng, people[i].math, people[i].total, people[i].avg, people[i].rank);
	}
	
	fclose(read);
	fclose(out);
}
