#include<stdio.h>
void read(int *,int);
void display(int *,int);
void inverse(int *,int);
void main(){
	int a[100],i;
	read(a,5);
	display(a,5);
	inverse(a,5);
	display(a,5);
}
void read(int *arr,int n){
	int i;
	printf("\nenter the numbers into the array:  \n");
	for(i=0;i<n;i++){
		scanf("%d",(arr+i));
	}
}
void display(int *arr,int n){
	
	int i;
	printf("\nthe array elements are:  \n");
	for( i=0;i<n;i++){
		printf("%3d",*(arr+i));
	}
}
void inverse(int *arr,int n){
	printf("\nInversing the given array:  ");
	int j=n-1,temp;
	int i;
	for(i=0;i<(n/2);i++){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		j--;
	}
}

