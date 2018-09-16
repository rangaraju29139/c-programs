#include<stdio.h>

void printArray(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){

	int n;
	scanf("%d",&n);
	int a[n];
	int i=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
//your function call here
	printArray(a,n);
return 0;	
}
