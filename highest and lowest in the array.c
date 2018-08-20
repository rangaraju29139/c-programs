#include<stdio.h>
void main(){
	int i,a[100],h,l,n;
	printf("enter the number of elements in the array:");
	scanf("%d",&n);
	printf("enter the array elements:  ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	h=a[0];
	l=a[0];
	for(i=0;i<n;i++){
		int temp = a[i];
		if(temp>h){
			h=temp;
		}else{
			if(temp<l){
				l=temp;
			}
		}
	}
	printf("the highest element in the array is: %d\n",h);
	printf("the lowest elenent in the array iis :%d\n ",l);
	
}
