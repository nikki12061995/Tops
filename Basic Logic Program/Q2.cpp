/* 2. Write a program to make Simple calculator (to make addition, subtraction, 
multiplication, division and modulo) */


#include <stdio.h>;

int main(){
	
	int num1,num2,sum,sub,mul,div,mod;
	
	printf("enter first number:");
	scanf("%d",&num1);
    
    printf("enter second number:");
	scanf("%d",&num2);
	
	sum=num1+num2;
	sub=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	mod=num1%num2;

	printf("sum:%d \n sub:%d \n mul:%d \n div:%d \n mod:%d",sum,sub,mul,div,mod);
	
	return 0;
	
}