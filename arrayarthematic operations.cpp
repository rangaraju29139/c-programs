#include<stdio.h>
#define MAXSIZE 10
int main(){
	int array[MAXSIZE];
	int i,num,negative_sum=0,positive_sum=0;
	float total = 0.0,average;
	printf("enter the value of N:\n");
	scanf("%d",&num);
	printf("enter %d numbers (-ve,+ve and zero) \n",num);
	for(i=0;i<num;i++){
		scanf("%d", &array[i]);
	}
	printf("input array elements are \n");
		for(i=0;i<num;i++){
	printf("%d",array[i]);
	}
	//summation starts
	for(i=0;i<num;i++){
		if(array[i]>0){
			positive_sum +=array[i];
		}else if (array[i]<0){
			negative_sum+=array[i];
		}else if(array[i]==0){
			;
		}
		total = total + array[i];
	}
	average = total/num;
	printf("\n%f is the average of the array elements",average);
	printf("\n sum of all negative integers =%d\n",negative_sum);
	printf("\n sum of all possitive integers=%d\n",positive_sum);
return 0;
}
