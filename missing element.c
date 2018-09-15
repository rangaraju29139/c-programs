#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
int a[n];
	int i;
	
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x1=1,x2=a[0];
	for(i=2;i<=n+1;i++){
		x1=x1^i;
	}
	for(i=1;i<n;i++){
		x2=x2^a[i];
	}
	int missing = x1^x2;
	printf("The missing element is : %d",missing);
	
	
	return 0;
}
