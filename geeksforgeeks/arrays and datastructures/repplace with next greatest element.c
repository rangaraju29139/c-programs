#include<stdio.h>
void  nextGreatestElement(int *a,int *n){
  	
  	int size= *n;
  	int max_from_right=a[size-1];
	  a[size-1]=-1;
  	int i;
  	for(i=size-2;i>=0;i--){
  		int temp =a[i];
  		a[i]=max_from_right;
  		if(temp>max_from_right){
  			max_from_right=temp;
		  }
	  }
}
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
	nextGreatestElement(a,&n);
	printArray(a,n);
return 0;	
}
