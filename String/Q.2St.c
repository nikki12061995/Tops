//2. Write a program in C to separate individual characters from a string.
#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	int i,length=0;
	
	printf("Enter a string:");
	gets(str);;
	
	length=strlen(str);
	
	printf("individual characters of string:");
	for(i=0;i<length;i++){
		printf("%c ",str[i]);
	}
	return 0;
	
}
