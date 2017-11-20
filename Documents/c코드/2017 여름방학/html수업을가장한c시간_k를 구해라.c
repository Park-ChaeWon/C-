#include <stdio.h>
int main(void) {
	int n, k, arr[1001];
	int i, j, cnt_u, rlt = 0;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	for(k=1;k<=n;k++){
		cnt_u=0;
		
		for(i=0;i<n;i++)
			if(arr[i]>=k) cnt_u++;
			
		if(k==cnt_u){
			rlt = k;
			break;
		}
	}

	printf("%d\n", rlt);
}
