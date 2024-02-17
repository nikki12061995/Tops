//10.WAP to perform Palindrome number using for loop and function
#include<stdio.h>
void palindrome(int n);
int main(){
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	palindrome(n);
}
void palindrome(int n){
	int i,rev=0,remainder,origional;
	origional=n;
	for(i=n;origional!=0;i++)
	{
		remainder=origional%10;
		rev=rev*10+remainder;
		origional /= 10;
	}
	if(n==rev){
		printf("\nPalindrome number.");
	}else{
		printf("\nnot Palindrome number.");
		
	}
	
}

