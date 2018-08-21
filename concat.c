#include<stdio.h>
#include<string.h>
void concat(char [],char[]);
int main(){
	char s1[50],s2[20];
	printf("enter the first string");
	gets(s1);
	printf("\n enter the second string");
	gets(s2);
	concat(s1,s2);
	printf("\n the concatenated strring is :");
	puts(s1);
	//this is the concatenated string
	return 0;
}
void concat(char s1[],char s2[]){
	int i,j;
	i=strlen(s1);
	s1[i++]=' ';
	for(j=0;s2[j]!='\0';j++){
		s1[i]=s2[j];
		i++;
	}
	s1[i]='\0';
}
