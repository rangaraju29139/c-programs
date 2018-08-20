#include<stdio.h>

int main(){
	char name[50];
	int marks ,i,n;
	printf("Enter number of students:  ");
    scanf("%d",&n);
    FILE *fptr;
    fptr = fopen("G:\\c programs\\studentss.txt","w");
    if(fptr==NULL){
    	printf("error!");
    	return 0;
	}
	
	
	
	printf("the file is copying:");
	for(i=0;i<n;i++){
		printf("for student%dEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter marks:  ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \n Marks = %d",name,marks);
	}
	fclose(fptr);
	return 0;
}
