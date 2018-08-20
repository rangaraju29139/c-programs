#include<stdio.h>
#define MAX 10
int start,end;
int q[MAX];
void push(){
     int data;
      printf("enter the data to enter into the queue:\n");
      scanf("%d",&data);
      if(end==MAX-1){
      	printf("queue is full\n");
      	return;
	  }
	  if(start==-1 && end==-1){
	  	start++;
	  	end++;
	  	q[end]=data;
	  }else{
	  	end++;
	  	q[end]=data;
	  }
      
}
void pop(){
	int data;
	if(start==end){
		printf("there are no elements in the stack\n");
	}else{
		q[start]=data;
		start++;
		printf("the popped data from the stack is %d\n",data);
	}
}
void display(){
	printf("the elements in the queue are:\n");
	if(start == end && start!=0){
		printf("the queue is empty:\n");
		return;
	}
	int i;
	for(i= start;i< end;i++){
		printf("%d->",q[i]);
	}
	printf("%d",q[i]);
}



void main(){
	int i;
	start=-1,
	end=-1;
	int stop=0;
	while(1 && !stop){
		printf("enter your choise:\n1:push\n2:pop\n3:display\notherwise exit\n");
		scanf("%d",&i);

		switch(i){
			case 1: push();
			        break;
			case 2:pop();
			       break;
			case 3:display();
			       break;
			default:stop=1;
			       break;
		}
		
	}
}
