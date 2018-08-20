#include<stdio.h>
#include<stdlib.h>
struct tnode{
	int data;
	struct tnode *left;
	struct tnode *right;
};
typedef struct tnode *tn;
tn createnode(tn root,int data){
  tn new=(tn)malloc(sizeof(tn));
  new->data=data;
  new->left=NULL;
  new->right=NULL;
  return new;
}
void inorder(tn root){
  if(!root)return ;
  printf("%d",root->data);
  inorder(root->left);
  inorder(root->right);
}

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
int main(){
	
	int n,i,j;
	tn root;
		printf("ok");
	scanf("%d",&n);
	printf(" you have entered the input  : %d\n",n);
	for(j=0;j<n;j++){
		scanf("%d",&i);
	
	root=insertbst(root,i);
	}
	
	inorder(root);
	return 0;
}
