//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
int main(){
	int n,sum=0;
	printf("Enter the number of term:");
	scanf("%d",&n);

    for(int i=1;i<=n;i++){
    	sum = (sum + (i*i));
	}
	printf("%d",sum);	
}
