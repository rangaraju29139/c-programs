#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int insert(){
	
}
int main(){
	
	int n,i,j;
	int queue[MAX];
	int top=-1;
	scanf("%d",&n);
	int stop=1;
    while(1 && stop){
    	scanf("%d",&j);
    	switch(j){
    		case 1:{
    		 top=insert();
				break;
			}
			case 2:{
				top=delete();
				break;
			}
			default :{
				stop=0;
				break;
			} 
		}
	}
	
	
	return 0;
}
