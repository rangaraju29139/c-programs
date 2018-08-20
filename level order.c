#include<sttdio.h>
#define MAX 10
struct tnode{
	int data;
	struct tnode *left,*right;
};
typedef struct tnode tn;
int start,end;
tn q[MAX];
void push(tn data){
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
		data=q[start]->data;
		
		printf("%d ",data);
		push(q[start]->left);
		push(q[start]->right);
        start++;
	}
}
struct tnode{
	int data;
	struct tnode *left,*right;
};
typedef struct tnode tn;

tn insertbst(tn root,int data){
		 
	if(root==NULL){
		root=createnode(root,data);
		return root;
	}else if(data<root->data){
	  root->left =	insertbst(root->left,data);
	}else if(data > root->data){
       root->right=insertbst(root->right,data);
	}
	return root;
}


void main(){
	tn root=NULL;
		int stop=0;
		int data;
	while(1 && !stop){
		printf("enter your choise:\n1:push\n2:pop\n3:display\notherwise exit\n");
		scanf("%d",&i);

		switch(i){
			case 1: insertbst();
			        break;
			case 2:pop();
			       break;
			case 3:display();
			       break;
			default:stop=1;
			       break;
		}
		
	}
	
	printf("the level order of the binary tree is :\n\n");

}
