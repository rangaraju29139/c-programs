#include<stdio.h>
#define SIZE 10
//this is size 10

void main(){
	int a[SIZE]={1,2,3,4,5,6,7,8,9,10},i;
	int total=0;
	for(i=0;i<SIZE;i++){
		total +=a[i];
	}
	printf("the total of all the elements in the array is : %d",total);
}
