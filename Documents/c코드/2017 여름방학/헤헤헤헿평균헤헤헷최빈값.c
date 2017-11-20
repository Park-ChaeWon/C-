#include <stdio.h>
int main(void){
	int arr[10]={0};
	int i, sum=0;
	
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	printf("%d\n", sum/10);

    
    printf("%d\n",x);
	/*
	for(i=0;i<n;i++)
    {
        freq=1;
        for(j=i+1;j<n;j++)
            if(a[i]==a[j])
                freq+=1;
        if(freq>=count)
        {
            mode=a[i];
            count=freq;
        }
    }
	*/
}
