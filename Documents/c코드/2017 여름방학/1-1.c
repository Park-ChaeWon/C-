#include <stdio.h>
//�̸�, ��ȣ �߰� 
int main(void){
	int kor[5], eng[5], math[5], total[5]={0}, i, j, rank[5], num[5];
	double avg[5];
	char name[5][20];

	FILE *read=fopen("input.txt","r");
	FILE *out = fopen("output.txt","w");
	
	for(i=0;i<5;i++){
		fscanf(read, "%d %s %d %d %d",&num[i], &name[i], &kor[i], &eng[i], &math[i]);
		total[i]=kor[i]+eng[i]+math[i];
		avg[i]=total[i]/3.0;
	}
	for(i=0;i<5;i++){
		int cnt = 1;
		for(j=0;j<5;j++){
			if(total[i]<total[j]) cnt++;
		}
		rank[i]=cnt;
	}
	
	for(i=0;i<5;i++){
		printf("%2d�� %5s : ����%4d | ����%4d | ����%4d | ����%4d | ���%8.3lf | %2d��\n", num[i], name[i], kor[i], eng[i], math[i], total[i], avg[i], rank[i]);
		fprintf(out, "%2d�� %5s : ����%4d | ����%4d | ����%4d | ����%4d | ���%8.3lf | %2d��\n",num[i], name[i], kor[i], eng[i], math[i], total[i], avg[i], rank[i]);
	}
	
	fclose(read);
	fclose(out);
}
