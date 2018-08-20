#include<stdio.h>
int main(){
	
	int i,n;
	long long int fact=1;
	scanf("%d",&n);
	if(n<0){
		printf("there is no factorial for the given no");
	}else{
		while(n>1){
			fact*=n;
			n--;
		}
	}
	
	printf("%lld",fact);
	
	return 0;
}
