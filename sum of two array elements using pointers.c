#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int main(){
	int i,n;

	printf("how many elements in each array:\n");
	scanf("%d",&n);
	int *a = (int *)malloc(n*sizeof(int));
	int *b= (int *)malloc(n*sizeof(int));
	int *c = (int *)malloc(n*sizeof(int));
	printf("Enter Elements of First List:\n");
	for(i=0;i<n;i++){
		scanf("%d",a+i);
	}
	printf("Enter the Elements of Second List:\n");
	for(i=0;i<n;i++){
		scanf("%d",b+i);
	}
	for(i=0;i<n;i++){
		*(c+i) = *(a+i) + *(b+i);
	}
	printf("the sum of corresponding elements in the two arrays:\n");
	for(i=0;i<n;i++){
		printf("%3d",*(c+i));
	}
	
	return 0;
}
