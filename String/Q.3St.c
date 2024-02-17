//3. Write a program in C to print individual characters of a string in reverse order
#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	int i,len=0;
	
	printf("Enter a string:");
	gets(str);;
	
	len=strlen(str);

	printf("individual characters of string in reverse order:");
	for(i=len;i>=0;i--){
		printf("%c ",str[i]);
	}
	return 0;
}
