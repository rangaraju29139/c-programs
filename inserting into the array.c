#include<stdio.h>
void main(){
	int i,size=5,item,pos,a[10],j;
	printf("enter  the elements: ");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the item to insert");
	scanf("%d",&item);
	printf("enter the postion to insert");
	scanf("%d",&pos);
	size++;
	for(j=size;j>=pos;j--){
		a[j]=a[j-1];
	}
	a[j]=item;
	printf("after  inserting the array is : ");
	for(i=0;i<size;i++){
		printf("|%d|",a[i]);
	}
}
