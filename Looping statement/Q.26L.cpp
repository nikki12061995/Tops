//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<stdio.h>
int main(){
	int n,sum=0,totalsum=0,i;
	printf("enter the number of series:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum += i;
		totalsum += sum;
		}
		printf("%d",totalsum);
		return 0;
}



