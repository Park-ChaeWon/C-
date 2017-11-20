/*
#include <Stdio.h>
#include <memory.h>
int main(void) {
	int arr1[5] = { 10,20,30,40,50 };
	int arr2[5] = { 0 };
	int i;
	memcpy(arr2, arr1, sizeof(arr2));

	for (i = 0; i < 5; i++) 
		printf("%d\t", arr2[i]);
	printf("\n");
}*/
#include <stdio.h>
int main(void) {
	int arr1[5] = { 10,20,30,40,50 };
	int arr2[5] = { 0 };
	int i;
	
	for (i = 0; i < 5; i++) arr2[i] = arr1[i];
	for (i = 0; i < 5; i++) printf("%d\t", arr2[i]);
	putchar('\n');
}