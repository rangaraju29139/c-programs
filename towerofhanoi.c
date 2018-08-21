#include<stdio.h>
void towerofhanoi(int n,char from,char to,char aux){
	//if one disk,make the moce and return 
	if(n==1){
		printf("\nmove the disk from peg %c to peg %c",from,to);
		return;
	}
	//move the top n-1 disks from A to C, using C as auxilary
	towerofhanoi(n-1,from,aux,to);
	//move the remaining disks from A to C
	printf("\nmove the disk %d from peg %c to peg %c",n,from,to);
	//move n-1 disks from B to C using A as auxilary
	towerofhanoi(n-1,aux,to,from);
}

void main(){
	int n;
	printf("enter the no of disks in the tower of honoi problem:");
	scanf("%d",&n);
	towerofhanoi(n,'A','C','B');
	
}
