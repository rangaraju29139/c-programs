#include<stdio.h>
int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	int i=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nbruteforce The leaders are:");
	for(i=0;i<n;i++){
		int j;
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				break;
			}
		}
		if(j==n){
			printf("%d ",a[i]);
		}
	}
	printf("\n the optimised approah:  ");
	int maxFromRight=a[n-1];
	printf("%d ",a[n-1]);
	/*
	
	
	in the second method we are just focussing on the max from right 
	the we traverse from the right and check if the number is greater than the max of the right 
	    then print the number else iterate further.
	*/
	for(i=n-2;i>=0;i--){
		if(a[i]>maxFromRight){
			printf("%d ",a[i]);
			maxFromRight=a[i];
		}
	}
	
	return 0;
}
