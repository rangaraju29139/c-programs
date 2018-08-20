#include<stdio.h>

int partition(int *a,int p,int r){
	int i,j,x,temp;
	i=p-1;
	x=a[r];
	for(j=p;j<r;j++){
		if(a[j]<=x){
			i++;
			temp=a[i],a[i]=a[j],a[j]=temp;
		}
	}
	temp=a[i+1],a[i+1]=a[r],a[r]=temp;
	
	return i+1;
}
void quicksort(int *a,int p,int r){	
int q;
if(p<r){
	q=partition(a,p,r);
	quicksort(a,p,q-1);
	quicksort(a,q+1,r);
}
}
int main(){
	int a[]={5,4,6,2,3,1};
	int p=0,r=5,i;
	quicksort(a,p,r);
	
	for(i=0;i<6;i++){
		printf("%d",a[i]);
	}
	
	return 0;
}

