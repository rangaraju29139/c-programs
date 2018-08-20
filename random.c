#include<stdio.h>
#include<stdlib.h>
int main(){
int i;
FILE *fptr;
fptr=fopen("G:\\c programs\\dataset.txt","w");
for(i=0;i<100;i++){
	fprintf(fptr,"the number is %d\n",rand());
}

return 0;

}
