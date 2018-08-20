#include<stdio.h>
void insertion_sort(int *a,int n){
	int key,j,i;
	
	for(j=1;j<n;j++){
		key=a[j];
		i=j-1;
		while(i>0 && a[i]>key){
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
		
	}
}
void main(){
	
	int a[20],n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
		for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
