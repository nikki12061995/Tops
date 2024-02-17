//3. WAP to find reverse of string using recursion
#include<stdio.h>
void reverse(char str[],int i);
int main(){
	int i;
	char str[50];
	printf("Enter string :");
	gets(str);
	printf("String reverse is ");
	reverse(str,0);
	
}
void reverse(char str[],int i){
	if(str[i]=='\0')
	     return;
	     reverse(str,i+1);
		printf("%c",str[i]);
		
}
