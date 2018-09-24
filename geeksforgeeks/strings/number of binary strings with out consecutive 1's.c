#include<stdio.h>

//link to the problem is :https://www.geeksforgeeks.org/count-number-binary-strings-without-consecutive-1s/
int main(){
	 int n;
	 scanf("%d",&n);
	 int a[n],b[n];
	 a[0]=b[0]=1;
	 int i;
	 for(i=1;i<n;i++){
	 	a[i]=a[i-1]+b[i-1];
	 	b[i]=a[i-1];
	 }
	 printf("the number of binary string without consecutive 1's is : %d",a[n-1]+b[n-1]);
return 0;
}
