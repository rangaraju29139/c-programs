#include<stdio.h>
printMajority(int a[],int n){
	int maj_index=0,max_count=0;
	int count=0;
	int i,j;
	for(i=0;i<n;i++){
		count=0;
		for(j=0;j<n;j++){
			if(a[i]==a[j]){
				count++;
			}
		}
		if(max_count<count){
			max_count=count;
			maj_index=i;
		}
	}
	
       if(max_count>n/2){
				printf("the majority element is : %d",a[maj_index]);	
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
