/*
MOORES VOTING ALGORITHM:

 step 1 finding the candidate
  BASIC IDEA: the basic idea of the algorithm is if we cancelout each occurrence of an element 
  e with all the other elements that are different from e then e will eist till end if it is a majority element.
  
  findCandidate(a[],size){
  1. Initialize index and count of majority element
      maj_index=0,count = 1;
  2. loop for i=1 to size-1
     a)if a[maj_index]==a[i]
       count++;
     b)Else
	    count--;
     c)if count ==0;
	    maj_index=i;
		 count=i; 
	return a[maj_index];
  }
  
 step2:check whether the candidate count is > n/2 or not.
  printMajoriity(a[],size){
  1.find the candidate for majority
  2.If candidate is majority i.e it appears more than n/2 times
     print the candidate
  3.else print none.
}

*/
#include<stdio.h>

int findCandidate(int a[],int n){
	int maj_index=0,count=1;
	int i;
	for(i=1;i<n;i++){
		if(a[maj_index]==a[i]){
			count++;
		}else {
			count--;
		}
		if(count==0){
			maj_index=i;
			count =1;
		}
	}
	
	return a[maj_index];
}
int is_Majority(int a[],int n, int candidate){
	int count=0;
	int i;
	for(i=0;i<n;i++){
		if(a[i]==candidate){
			count++;
		}
	}
	if(count>=n/2){
		return 1;
	}else {
		return 0;
	}
}

printMajority(int a[],int n){
int candidate =findCandidate(a,n);

if(is_Majority(a,n,candidate)){
	printf(" the majority element is : %d ",candidate);
}else{
	printf("no majority element");
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
	
	printMajority(a,n);
	return 0;
}
