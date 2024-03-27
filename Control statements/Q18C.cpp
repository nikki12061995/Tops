//18. Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main(){
	int cp,sp,Amt;
	
	printf("Enter cost price:");
	scanf("%d",&cp);
	printf("Enter selling price:");
	scanf("%d",&sp);
	
	if(sp>cp){
		Amt = sp - cp;
		printf("Profit = %d\n",Amt);
	}
	else if(cp>sp){
		Amt = cp - sp;
		printf("Loss = %d\n",Amt);
	}
	else{
		printf("No Profit No Loss\n");
		
	}
	return 0;
}
