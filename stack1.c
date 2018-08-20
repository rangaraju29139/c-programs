#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int top=-1;


void push(int *q){
	int i;
	printf("\nenter the number to push into the stack:");
	scanf("%d",&i);
	if(top==MAX-1){
		printf("stack overflow:");
	}else{
		top++;
		q[top]=i;
	}
}
void pop(int *q){
	int x;
	if(top==-1){
		printf("stack underflow:");
		
	}else{
		x=q[top--];
	
		printf("\nthe popped element is %d",x);
	}
}
void display(int *q){
	printf("\nyou have choosen to display the stack:\n");
	int i=top;
	if(i==-1){
		printf("\nthere is nothing in the stack:");
	}else{
		while(i!=0){
			printf("%d->",q[i]);
			i--;
		}
		printf("%d\n",q[i]);
	}
	
}



int main(){
	
	int *q=(int *)malloc(sizeof(int)*MAX);
	int choice;

	while(1){
		printf("enter your choice:\n1:push\n2:pop\n3:display\n otherwise exit\n");
		scanf("%d",&choice);
		if(choice==1){
			push(q);
		}else if(choice==2){
			pop(q);
		}else if(choice==3){
			display(q);
		}else{
			break;
		}
	}
	
	
return 0;	
}
