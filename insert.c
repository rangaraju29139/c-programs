#include<stdio.h>
#include<stdlib.h>
struct lnode
{
	int data;
	struct lnode *link;
};
typedef struct lnode *lptr;
lptr insertfront(lptr root,int x)
{
	lptr temp=(lptr)malloc(sizeof(lptr));
	temp->data=x;
    
    if(root==NULL)
    {
    	temp->link=NULL;
    	return temp;
	}
	temp->link=root;
	return temp;
	
}
lptr delete(lptr root,int pos){
	lptr t,prev;
	int p=0;
	if(!root){
		return root;
	}
	if(pos==0){
		t=root;
		root=root->link;
		free(t);
		return root;
	}
	t=root;
	while(p!=pos && t){
		prev=t;
		t=t->link;
		p++;
	}

	if(t)
	{
	prev->link=t->link;
	t->link=NULL;
	free(t); 
     }
     //display(root);
	return root;
}
lptr insertend(lptr root,int x){
	lptr new=(lptr)malloc(sizeof(lptr));
	lptr temp;
	new->data=x;
	new->link=NULL;
	temp=root;
	if(root==NULL){
		//root=new;
		return new;
	}
	while(temp->link){
		temp=temp->link;
	}
	temp->link=new;
	return root;	
}
void display(lptr temp){

	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->link;
	}
}
int main()
{
	lptr root=NULL,k;
	int x,pos;
	scanf("%d",&x);
	while(x!=-1)
	{
		root=insertend(root,x);
		scanf("%d",&x);
	}
display(root);
	printf("\nenter the position to delete");
	scanf("%d",&pos);
	k=delete(root,pos);
	display(k);
	
	return 0;
}
