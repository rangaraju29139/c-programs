#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void printTable(int **table,int n){
	int i,j;
	 for(i=0;i<n;i++){
   	for(j=0;j<n;j++){
   		printf("%d ",table[i][j]);
	   }
	   printf("\n");
   }
}

void longestpalindrome(char *s){
   int n=strlen(s);
   int table[n][n];
   int i,j;
    for(i=0;i<n;i++){
   	for(j=0;j<n;j++){
   		if(i==j)table[i][j]==1;
   	
	   }
   }
   
  int start=0;
  int maxlength=1;
  for(i=0;i<n-1;i++){
  	 if(s[i]==s[i+1]){
  	 	table[i][i+1]=1;
  	 	start=i;
  	 	maxlength=2;
	   }
  }
  int k;
for(k=3;i<=n;i++){
	for(i=0;i<n-k+1;i++){
		j=i+k-1;
		if(table[i+1][j-1] && s[i]==s[j]){
			table[i][j]=1;
			if(k>maxlength){
				start=i;
				maxlength=k;
			}
		}else{
			table[i][j]=0;
		}
	}
	printf("%d is the maxlength",maxlength);
	printf("\nthe longest substring is:");
	for(i=start;i<=start+maxlength-1;i++){
		printf("%c",s[i]);
	}
}
}

int main(){
	
	
	char s[100];
      scanf("%s",s);
   	longestpalindrome(s);
	
	return 0;
}
