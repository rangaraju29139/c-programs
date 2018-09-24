#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void swap(char *a,char *b){
	char t;
	t= *a;
	*a = *b;
	*b = t;
}
void permute(char *s,int l,int r){
	if(l==r){
		printf("\n%s",s);
	}else{
		int i;
		for(i=l;i<=r;i++){
			swap(s+l,s+i);
			permute(s,l+1,r);
			swap(s+l,s+i);
		}
	}
}

int main(){
	
	
	char s[]="ABC";
	int len=strlen(s);
	permute(s,0,len-1);
	
	return 0;
}
