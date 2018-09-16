#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

//this is the brute force approach
//the  link to the problem is https://www.geeksforgeeks.org/find-the-minimum-distance-between-two-numbers/
int mindist(int a[],int x,int y,int n){
	int min=INT_MAX;
  int i,j;
  for(i=0;i<n;i++){
  	for(j=i+1;j<n;j++){
  		if(x==a[i] && y==a[j] || y==a[i] && x==a[j] && min >abs(i-j)){
  			min=abs(i-j);
		  }
	  }
  	
  }
	return min;
}

//this is tht second approach to find the minimum distance
int mindist2(int a[],int x,int y,int n){
	int min=INT_MAX;
	int prev;
	int i,j;
	for(i=0;i<n;i++){
		if(a[i]==x || a[i]==y){
			prev=i;
			break;
		}
	}
	i++;
	for(;i<n;i++){
		if(a[i]==x || a[i]==y){
		 if(a[prev]!=a[i] && (i-prev)<min){
		 	min=i-prev;
		 	prev=i;
		 }else {
		 	prev=i;
		 }
			
		}
	}
	return min;
}
/*
in second approach 

first we need to find the first occuranace of eithe x or y and store it to the prev;

 the traverse the array to find the next either x or y;
   if the number in a[prev]  is same as the a[i] then: update prev as i;
   els if the number is not same  and i-PRev < min then min = i-prev  && prev=i;
*/


int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nenter x & y :");
	int x,y;
	scanf("%d%d",&x,&y);
	printf("minimum distance between the x & y is %d :",mindist(a,x,y,n));
	printf("\n second approach to find min dist =%d",mindist2(a,x,y,n));
	return 0;
}
