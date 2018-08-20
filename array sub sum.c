#include<stdio.h>

#include<stdlib.h>
#define MAX 100
int maxSubArray(int a[],int size,int *begin,int *end){
	int max_so_far=0 ,max_end =0,i;
	int current_index = 0;
	for(i=0;i<size;i++){
		max_end += a[i];
		if(max_end <=0){
			current_index= i+1;
			max_end = 0;
		}else if (max_so_far < max_end){
			max_so_far = max_end;
			*begin = current_index;
			*end=i;
		}
	}
	return max_so_far;
}
void main(){
	int start =0,end=0,n,size;
    int a[MAX],i;
	scanf("%d",&n)	;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("the sum of the maximum sub array is %d\n",maxSubArray(a,size,&start,&end));
	printf("the begining and the ending pointers are %d & %d",start,end);
}
