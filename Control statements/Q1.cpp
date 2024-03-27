/*1. Write a C program to accept two integers and check whether they are equal 
or not
*/

#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the number:");
	scanf("%d",&a);
	printf("Enter the number:");
	scanf("%d",&b);
	 
	if(a==b){
		printf("num is equal",a);
	}
	if(a!=b){
		printf("num is not equal",b);
	}
	return 0;
}
