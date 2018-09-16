#include<stdio.h>
int countIncreasing(int a[],int n){
	int count=0;
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[j]>a[j-1]){
				count++;
			}else {
				break;
			}
		}
	}
	return count;
}

//the problem link is https://www.geeksforgeeks.org/count-strictly-increasing-subarrays/
int main(){

	int n;
	scanf("%d",&n);
	int a[n];
	int i=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
//your function call here
	printf("the number of increasing sub arrays is :%d",countIncreasing(a,n));
	
return 0;
}

