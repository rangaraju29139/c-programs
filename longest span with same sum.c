#include<stdio.h>
int longestCommonSum(int a[],int b[]){
	int i,j,max=0;
	int a_sum=0,b_sum=0;
	for(i=0;i<6;i++){
		a_sum=0;
		b_sum=0;
		for(j=i;j<5;j++){
			a_sum+=a[j];
			b_sum+=b[j];
			
			if(a_sum==b_sum){
				int len=j-i+1;
				if(len>max){
					max=len;
				}
			}
		}
	}
	return max;
	
}
//second approach for the longestCommonSum2
int longestCommonSum2(int a[],int b[]){
	int max=0;
	int presum1=0,presum2=0;
	int diff[2*6+1]={-1};
	int i,j,len;
	for(i=0;i<6;i++){
		presum1+=a[i];
		presum2+=b[i];
		int currdiff=presum1-presum2;
		int diffindex=6+currdiff;
		
		if(currdiff==0){
			max=i+1;
			
		}else if(diff[diffindex]==-1){
			diff[diffindex]=i;
		}else{
			int len=i-diff[diffindex];
			if(len>max){
				max=len;
			}
		}
	}
	
	return max;
}

int main(){
	int a[]={1,0,1,0,0,0};
	int b[]={0,1,0,1,0,0};
	printf("longest common sum : %d",longestCommonSum(a,b));
	printf("\n  longest common sum : %d",longestCommonSum2(a,b));
	
	return 0;
}
