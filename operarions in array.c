#include<stdio.h>
#include<math.h>
void main(){
	int a[10],i,n=5;
	float mean,var,sd,temp,sum=0.0;
	for(i=0;i<n;i++){
		printf("\n enter number -%d  ",i+1);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	mean=sum/n;
	sum=0.0;
	for(i=0;i<n;i++){
		temp=a[i]-mean;
		sum=sum+(temp*temp);
	}
	var =sum/n;
	sd=sqrt(var);
	printf("\n the mean of the given numbers is %.2f",mean);
	printf("\n the varaiance of the given numbers is %.2f",var);
	printf("\n the standard deviation of the given numbers is %.2f",sd);
	
}
