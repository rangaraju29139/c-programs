#include<stdio.h>
int fixedPoint(int a[],int low,int high){
  if(high>=low){
  
	int mid=(low+high)/2;
	if(mid==a[mid]){
		return mid;
	}else if(mid>a[mid]){
		return fixedPoint(a,(mid+1),high);
	}else if(mid<a[mid]){
		return fixedPoint(a,low,(mid-1));
	}
}
	return -1;
}

int main(){

	int n;
	scanf("%d",&n);
	int a[n];
	int i=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
    //your function call here
   int res=fixedPoint(a,0,n-1);
   if(res==-1){
   	printf("no fixed point");
   }else{
   	printf("the fixed point in the given array is %d",res);
   }

return 0;
}

