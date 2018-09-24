#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	printf("enter the string:");
	scanf("%s",s);
	
	int l=strlen(s);
	char t;
	int i,j;
	for(i=0,j=l-1;i<j;i++,j--){
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}
	printf("\nthe reversed string is :");
	for(i=0;i<l;i++){
		printf("%c",s[i]);
	}
	return 0;
}
