//9. Write a program in C to find the maximum number of characters in a string.
#include<stdio.h>
#include<string.h>
int main(){
	char s[50],ch;
	int i,len,count;
	
	printf("Enter the string :");
	gets(s);
	
	printf("Enter the characater :");
	scanf(" %c",&ch);
	
	len=strlen(s);
	
	for(i=0;i<len;i++){
		if(ch == s[i]){
			count++;
		}
	}
	printf("Maximum number of %c is : %d",ch,count);
	
	return 0;
}
