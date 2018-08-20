#include<stdio.h>
int main(){
	int rem,j=1,n,sum=0;
	scanf("%d",&n);
	while(n>0){
		rem=n%10;
		sum+=rem*j;
		j*=2;
		n=n/10;
		
	}
	
	printf("%d",sum);
	
	
	return 0;
}
