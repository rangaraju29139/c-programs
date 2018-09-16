#include<stdio.h>
int oddOccurance(int a[],int n){
	int x1=a[0];
	int i;
	for(i=1;i<n;i++){
		x1=x1^a[i];
	}
  return x1;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int x=oddOccurance(a,n);
	if(x!=0)
	printf("the odd occurance element is : %d",x);
	else {
		printf("the odd occurance element is either 0 or no odd occurance element");
	}
	return 0;
}
