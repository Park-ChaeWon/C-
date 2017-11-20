#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i;
	int size;
	scanf("%d", &size);
	
	int *p = (int*)malloc(size * sizeof(int));
	
	if(p != NULL){
		for(i=0; i<size; i++) p[i]=i+1;
		for(i=0; i<size; i++) printf("%3d ", p[i]);
	}	
	printf("\n");
	free(p);
}
