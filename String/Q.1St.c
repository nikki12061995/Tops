/*1. Write a program in C to find the length of a string without using library 
functions.
*/
#include<stdio.h>
int main(){
	char str[50];
	int i,length=0;
	
	printf("Enter a string: \n");
	gets(str);
	
	for(i=0;str[i]!=0;i++)
	{
		length++;
	}
	printf("\n length of string is :%d",length);
	return 0;
}
