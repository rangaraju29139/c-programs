#include<stdio.h>
int peakElement(int a[],int low,int high,int n){
	int mid=(low+high)/2;
	if((mid==0 || a[mid-1]<=a[mid]) && (mid==n-1 || a[mid+1]<=a[mid]) ){
		return mid;
	}else if(mid>0 && a[mid-1]>a[mid]){
		return peakElement(a,low,mid-1,n);
 	}else {
 		return peakElement(a,(mid+1),high,n);
	 }
	}	

//the problem linkk is https://www.geeksforgeeks.org/find-a-peak-in-a-given-array/
int main(){

	int n;
	scanf("%d",&n);
	int a[n];
	int i=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
//your function call here
int x=peakElement(a,0,n-1,n);
printf("The peak element is : %d",a[x]);
return 0;
}

