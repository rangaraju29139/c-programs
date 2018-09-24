#include<stdio.h>
#include<string.h>
void reverse(char *s,int start,int end){
	char t;
	if(start>=end){
	 return;
	}
	
	// using xor operator
	 s[start]=s[start]^s[end];
	 s[end]=s[end]^s[start];
	 s[start]=s[start]^s[end];
	 
	 reverse(s,start+1,end-1);
	
}
int main(){
	char s[100];
	printf("enter the string:");
	scanf("%s",s);
	
	int l=strlen(s);
	reverse(s,0,l-1);
	
	printf("%s",s);
	
	return 0;
}
