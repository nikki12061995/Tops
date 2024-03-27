//6. WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main(){
	int i,n,n1=0,n2=1,nxt;
	
	printf("Enter the number of term:");
	scanf("%d",&n);
	
	printf("print fibonacci series:");
	
	
	
	for(i=1;i<=n;i++)
	{
		printf(" %d",n1);
	    nxt=n1+n2;
	    n1=n2;
	    n2=nxt;
	    
	    
	   	
	}
	
	return 0;
	
}
