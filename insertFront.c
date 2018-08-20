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
int main()
{
	lptr root=NULL;
	int x;
	scanf("%d",&x);
	while(x!=-1)
	{
		root=insertend(root,x);
		scanf("%d",&x);
	}
	while(root!=NULL)
	{
		printf("%d ",root->data);
		root=root->link;
	}
	return 0;
}
