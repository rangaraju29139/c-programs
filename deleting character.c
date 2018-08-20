#include<stdio.h>
#include<string.h>
void del(char s[],char a){
	int i,j;
	char s1[100];
	
	int size =strlen(s);
	for(i=0,j=0;i<size;i++){
		if(s[i]==a){
			continue;
		}
		s1[j++]=s[i];
	}
	s1[j]='\0';
	printf("the string after deletion of character \'%c\' is ",a);
	puts(s1);
}
int main(){
	char s[100],ch;
	printf("enter the string: ");
	gets(s);
	printf("enter the character to delete");
	scanf("%c",&ch);
	del(s,ch);
	
	return  0;
}
