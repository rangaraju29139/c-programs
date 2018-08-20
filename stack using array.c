#include<stdio.h>
#include<conio.h>
#define MAX 5
int top,status;
void push(int stack[],int item){
	if(top==MAX-1){
		status=0;
	}else{
		status=1;
		top++;
		stack[top]=item;
	}
}
int pop(int stack[]){
	int temp;
	if(top==-1){
		status=1;
		temp =0;
	}else{
		status=1;
		temp=stack[top--];
	}
	return temp;
}
void display(int stack[]){
	int i;
	printf("\n The stack is: ");
		if(top==-1){
			printf("empty");
		}else{
			for(i=top;i>=0;--i){
				printf("\n==========\n| %3d  |\n======",stack[i]);
			}
		}
		printf("\n");
}
void main(){
	int stack[MAX],item;
	int ch;
	top=-1;
	do{
		do{
			printf("main menu:\n");
			printf("\n1.PUSH(insert) in the stack");
			printf("\n2.pop");
			printf("\n3.exit");
			printf("\nEnter your Choice:   ");
			scanf("%d",&ch);
			if(ch<1||ch>3)printf("\ninvlid option: ");
		}while(ch<1 || ch>3);
		
		switch(ch){
			case 1:printf("\nEnter the element to be pushed:  ");
					scanf("%d",&item);
					push(stack,item);
					if(status){
						printf("\n after pushing ");
						display(stack);
						if(top==(MAX-1))printf("\n the stack is full");
					}
						break;
			case 2: item = pop(stack);
					if(status){
						printf("the popped item is %d. after popping:",item);
						display(stack);
					}else{
						printf("\n the stack is undeerflow on the pop");
						
					}
					break;
					
			default:  printf("\nend of execution:  ");
			
					
					
		}
	}while(ch!=3);
}
