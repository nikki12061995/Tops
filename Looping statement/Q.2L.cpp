//2. WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
int main(){
	int n,i;

	for(i=1;i<=5;i++){
		printf("Enter the number:");
		scanf("%d",&n);
		printf(" %d\n ",n);
	}	
	return 0;
}
