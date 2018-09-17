#include<stdio.h>
void printArray(int a[],int n){
	int i;
	printf("\n the array elements are:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void leftRotateArray(int *a,int n){
	int temp,i;
	temp=a[0];
	for(i=0;i<n-1;i++){
		a[i]=a[i+1];
	}
	a[n-1]=temp;
}
void rightRotateArray(int *a,int n){
	int temp,i;
	temp=a[n-1];
	for(i=n-1;i>=0;i--){
		a[i]=a[i-1];
	}
	a[0]=temp;
}
int main(){
	int i,j,n;
	printf("Enter n value:");
	scanf("%d",&n);
	printf("\nenter the array elements:");
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int r;
	printf("\nenter the number of shifts:");
	scanf("%d",&r);
	for(i=0;i<r;i++){
	rightRotateArray(a,n);
}
 printf("\narray after the right rotation :");
	printArray(a,n);
	
	
	return 0;
}
